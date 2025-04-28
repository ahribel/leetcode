project('leetcode', 'cpp',
        version : '1.0.0',
        default_options : ['warning_level=3', 'cpp_std=c++20'])

# Get GoogleTest from subprojects
gtest_proj = subproject('gtest')
gtest_main_dep = gtest_proj.get_variable('gtest_main_dep')
gmock_main_dep = gtest_proj.get_variable('gmock_main_dep')

# Add each problem manually (or loop/glob if needed)
subdir('problems/easy/1768_merge_strings_alternately/cpp')
subdir('problems/easy/0121_best_time_to_buy_and_sell_stock/cpp')
subdir('problems/medium/0122_best_time_to_buy_and_sell_stock_2/cpp')
subdir('problems/medium/0189_rotate_array/cpp')
subdir('problems/easy/0027_remove_element/cpp')
subdir('problems/easy/0169_majority_element/cpp')
subdir('problems/easy/0088_merge_sorted_array/cpp')
subdir('problems/easy/0026_remove_duplicates_from_sorted_array/cpp')
