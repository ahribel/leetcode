//
// Created by kuwi on 4/30/25.
//

#include "solution_0080.h"

namespace sol_0080_a {
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) return static_cast<int>(nums.size());
        auto tail = 2;
        for (size_t head = 2; head < nums.size(); ++head) {
            if (nums[head] != nums[tail-2]) {
                nums[tail++] = nums[head];
            }
        }
        return tail;
    }
}