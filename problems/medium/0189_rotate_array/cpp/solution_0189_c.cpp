//
// Created by kuwi on 4/26/25.
//

#include <numeric>

#include "solution_0189.h"

namespace solutionC {
    void rotate(vector<int>& nums, int k) {
        const auto n {static_cast<int>(nums.size())};
        k %= n;
        const auto step {gcd(n, k)};
        for (int i = 0; i < step; i++) {
            auto idx {i};
            const auto tmp {nums[idx]};
            auto prev {(n + idx - k) % n};
            while (prev != i) {
                nums[idx] = nums[prev];
                idx = prev;
                prev = (n + idx - k) % n;
            }
            nums[idx] = tmp;
        }
    }
}