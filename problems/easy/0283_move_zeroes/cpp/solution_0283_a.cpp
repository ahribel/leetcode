//
// Created by kuwi on 5/1/25.
//

#include "solution_0283.h"

namespace sol_0283_a {
    void moveZeroes(vector<int>& nums) {
        auto head { nums.begin() };
        for (auto it = nums.begin(); it != nums.end(); ++it) {
            if (*it) iter_swap(head++, it);
        }
    }
}