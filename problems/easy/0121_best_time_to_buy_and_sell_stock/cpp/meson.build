srcs = [
    'solution_0121_a.cpp',
    'tests_0121.cpp'
]

test_exe = executable(
    'tests_0121',
    srcs,
    dependencies: [gtest_main_dep, gmock_main_dep],
    include_directories: include_directories('.')
)

test('0121 best time to buy and sell stock', test_exe)