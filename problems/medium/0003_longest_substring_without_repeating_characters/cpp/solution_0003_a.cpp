//
// Created by kuwi on 5/4/25.
//

#include <cstring>
#include <iostream>

#include "solution_0003.h"

namespace sol_0003_a {
    int lengthOfLongestSubstring(string s) {
        bool c[256] {false};
        int max {0};
        int sum {0};
        auto tail = s.begin();
        for (auto head = s.begin(); head != s.end();) {
            if (!c[*head]) {
                c[*head++] = true;
                ++sum;
            } else {
                max = std::max(max, sum);
                while (*tail != *head) {
                    c[*tail++] = false;
                    --sum;
                }
                c[*tail++] = false;
                --sum;
            }
        }
        return std::max(max, sum);
    }
}