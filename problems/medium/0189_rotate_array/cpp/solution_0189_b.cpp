//
// Created by kuwi on 4/26/25.
//

#include <algorithm>
#include "solution_0189.h"

namespace solutionB {
    void rotate(vector<int>& nums, int k) {
        k %= static_cast<int>(nums.size());
        ::reverse(nums.begin(),nums.end()-k);
        ::reverse(nums.end()-k, nums.end());
        ::reverse(nums.begin(), nums.end());
    }
}