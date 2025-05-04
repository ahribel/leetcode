//
// Created by kuwi on 5/2/25.
//

#include "solution_0209_alt.h"

namespace sol_0209_alt_a {
    int minSubArrayLen(int target, vector<int>& nums) {
        auto sum {0};
        auto tail { nums.begin() };
        auto head { nums.begin() };
        auto len { head - tail };
        while (head < nums.end() || (tail < nums.end() && sum >= target)) {
            if (sum < target) {
                sum += *head++;
            } else if (sum > target) {
                if (tail == head)
                    ++head;
                sum -= *tail++;
            } else {
                len = len ? min(len, head - tail) : head - tail;
                sum = sum + *head++ - *tail++;
            }
        }
        return static_cast<int>(len);
    }
}


//
// auto len {0};
// auto sum {0};
// auto tail { nums.begin() };
// auto head { nums.begin() };
// while (head < nums.end() || tail < nums.end()) {
//     if (sum < target) {
//         sum += *head++;
//     } else if (sum > target) {
//         if (tail == head)
//             ++head;
//         sum -= *tail++;
//     } else {
//         len = len ? min(len, static_cast<int>(head-tail)) : head - tail;
//         sum = sum + *head++ - *tail++;
//     }
// }
// while (tail < nums.end() && sum > target) {
//     sum -=
// }
// return len;

    // auto len {0};
    // auto sum {0};
    // auto tail {0};
    // auto head {0};
    // const auto n {static_cast<int>(nums.size())};
    // while (head < n || tail < n) {
    //     if (sum < target) {
    //         sum += nums[head++];
    //     } else if (sum > target) {
    //         if (tail == head)
    //             ++head;
    //         sum -= nums[tail++];
    //     } else {
    //         len = len ? min(len, head - tail) : head - tail;
    //         sum = sum + nums[head++] - nums[tail++];
    //     }
    // }
    // return len;
