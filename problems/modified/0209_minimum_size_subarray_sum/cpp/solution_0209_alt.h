//
// Created by kuwi on 5/2/25.
//

// 1 <= target <= 109
// 1 <= nums.length <= 105
// 1 <= nums[i] <= 104

// Given an array of positive integers nums and a positive integer target,
// return the minimal length of a subarray whose sum is greater than or equal to target.
// If there is no such subarray, return 0 instead.

#ifndef SOLUTION_0209_H
#define SOLUTION_0209_H

#include <vector>
using namespace std;

namespace sol_0209_alt_a {
    int minSubArrayLen(int target, vector<int>& nums);
}

#endif //SOLUTION_0209_H
