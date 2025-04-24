# Sources
srcs = [
    '1768_tests.cpp',
    '1768_solution1.cpp',
    '1768_solution2.cpp',
]

# Include current dir so 1768_solution.h is visible
test_exe = executable(
    '1768_tests',
    srcs,
    dependencies: [gtest_main_dep, gmock_main_dep]
)

test('1768 merge strings alternately', test_exe)