//
// Created by kuwi on 4/26/25.
//

#include "solution_0169.h"

namespace solutionC {
    int majorityElement(vector<int>& nums) {
        auto leading {0};
        auto sum {0};
        for (const auto& el : nums) {
            if (sum == 0) leading = el;
            sum += leading == el ? 1 : -1;
        }
        return leading;
    }
}