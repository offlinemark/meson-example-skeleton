XCatchWrapper = declare_dependency(
    sources: [
        'include/CatchWrapper.hpp' # this is not needed?
    ],
    dependencies: [
        dependency(
            'catch2-with-main',  # this is the name of the dependency in the wrap file
            default_options: {
                'tests': false  # disable building their internal tests
            }
        ),
    ],
    include_directories: 'include',
)
