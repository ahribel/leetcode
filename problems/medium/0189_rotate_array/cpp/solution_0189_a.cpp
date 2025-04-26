//
// Created by kuwi on 4/26/25.
//

#include "solution_0189.h"

namespace solutionA {
    void rotate(vector<int>& nums, int k) {
        k %= static_cast<int>(nums.size());
        auto lmb = [](auto begin, auto end) {
            while (begin < end) {
                iter_swap(begin++, --end);
            }
        };
        lmb(nums.begin(),nums.end()-k);
        lmb(nums.end()-k, nums.end());
        lmb(nums.begin(), nums.end());
    }
}