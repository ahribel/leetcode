//
// Created by kuwi on 4/26/25.
//

#include <algorithm>

#include "solution_0189.h"

namespace solutionD {
    void rotate(vector<int>& nums, int k) {
        k %= static_cast<int>(nums.size());
        ::rotate(nums.rbegin(), nums.rbegin() + k,  nums.rend());
    }
}