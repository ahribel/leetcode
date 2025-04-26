//
// Created by kuwi on 4/26/25.
//

#include "solution_0189.h"

namespace solutionE {
    void rotate(vector<int>& nums, int k) {
        k %= static_cast<int>(nums.size());
        vector<int> tmp {nums.end() - k, nums.end()};
        copy_backward(nums.begin(), nums.end() - k, nums.end());
        copy(tmp.begin(), tmp.end(), nums.begin());
    }
}