project('leetcode', 'cpp',
        version : '1.0.0',
        default_options : ['warning_level=3', 'cpp_std=c++20'])

# Get GoogleTest from subprojects
gtest_proj = subproject('gtest')
gtest_main_dep = gtest_proj.get_variable('gtest_main_dep')
gmock_main_dep = gtest_proj.get_variable('gmock_main_dep')


# Add each problem manually (or loop/glob if needed)
subdir('problems/easy/1768_merge_strings_alternately/cpp')