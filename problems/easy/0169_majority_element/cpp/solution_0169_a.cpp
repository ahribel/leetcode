//
// Created by kuwi on 4/26/25.
//

#include <algorithm>
#include "solution_0169.h"

namespace solutionA {
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
}