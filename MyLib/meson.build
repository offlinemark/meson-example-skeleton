_MyLib = library(
    'MyLib',
    sources: [
        'src/mylib.cpp',
        'src/PrivateHelper.cpp'
    ],
    include_directories: [
        'include'  # So the src files in this lib can find the includes
    ],
    implicit_include_directories: false,  # This reduces -I noise in compile commands
)

MyLib = declare_dependency(
    include_directories: 'include',  # So external client targets can find the includes
    link_with: _MyLib,
)


MyLibTest = executable(
    'MyLibTest',
    sources: [
        'test/tst_mylib.cpp'
    ],
    dependencies: [
        MyLib,
        XCatchWrapper,
    ],
)

# Register this test with `meson test` - the test runner
test(MyLibTest.name(), MyLibTest)
