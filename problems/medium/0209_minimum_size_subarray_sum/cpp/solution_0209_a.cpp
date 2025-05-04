//
// Created by kuwi on 5/2/25.
//

#include "solution_0209.h"

namespace sol_0209_a {
    int minSubArrayLen(int target, vector<int>& nums) {
        auto sum {0};
        auto tail { nums.begin() };
        auto head { nums.begin() };
        auto len { head - tail };
        while (head < nums.end() || (tail < nums.end() && sum >= target)) {
            if (sum < target) {
                sum += *head++;
            } else {
                len = len ? min(len, head - tail) : head - tail;
                if (tail == head)
                    ++head;
                sum -= *tail++;
            }
        }
        return static_cast<int>(len);
    }
}