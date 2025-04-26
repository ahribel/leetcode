//
// Created by kuwi on 4/26/25.
//

#include "solution_0027.h"

namespace solutionA {
    int removeElement(vector<int>& nums, int val) {
        auto head = nums.rbegin();
        auto tail = nums.rbegin();
        while (head != nums.rend()) {
            if (*head == val)
                *head = *tail++;
            ++head;
        }
        return static_cast<int>(head - tail);
    }
}