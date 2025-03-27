project(
  'myproject',
  'cpp',
  default_options: {
    'cpp_std': 'c++17',
    # 'build.cpp_std=c+17' # this necessary?

    'warning_level': '3',  # -Wall -Winvalid-pch -Wextra -Wpedantic
    'werror': true,

    # Use ASAN by default. Can be disabled with -Db_sanitize=none
    'b_sanitize': 'address',
    'b_lundef': false  # There's a meson warning about asan otherwise
  },
  meson_version: '>=1.2.0' # for dicts here
)

# Order matters. Targets are not visible, unless they were previously executed.
# Can this cause issues with complicated deps structures?

subdir('third_party')

subdir('MyLib')

subdir('MyExe')


