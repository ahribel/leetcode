//
// Created by kuwi on 5/1/25.
//

#include <algorithm>
#include <iostream>

#include "solution_0283.h"

namespace sol_0283_b {
    void moveZeroes(vector<int>& nums) {
        fill(remove(nums.begin(), nums.end(), 0), nums.end(), 0);
    }
}