//
// Created by kuwi on 4/28/25.
//

#include "solution_0026.h"

namespace sol_0026_a {
    int removeDuplicates(vector<int>& nums) {
        auto tail = 1;
        for (size_t head = 1; head < nums.size(); ++head) {
            if (nums[head] != nums[head-1])
                nums[tail++] = nums[head];
        }
        return tail;
    }
}