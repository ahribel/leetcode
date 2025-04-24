# Sources
srcs = [
    'tests_1768.cpp',
    'solution_1768_a.cpp'
]

# Include current dir so solution_1768.h is visible
test_exe = executable(
    'tests_1768',
    srcs,
    dependencies: [gtest_main_dep, gmock_main_dep]
)

test('1768 merge strings alternately', test_exe)