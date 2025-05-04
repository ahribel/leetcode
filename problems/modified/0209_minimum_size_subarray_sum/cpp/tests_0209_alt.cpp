//
// Created by kuwi on 5/2/25.
//

#include <gtest/gtest.h>
#include "solution_0209_alt.h"

template<typename Solution>
class MinimumSizeSubarraySumTest : public testing::Test {};

struct SolA {
    static int run(int target, vector<int>& nums) {
        return sol_0209_alt_a::minSubArrayLen(target, nums);
    }
};

using Implementations = testing::Types<SolA>;
TYPED_TEST_SUITE(MinimumSizeSubarraySumTest, Implementations);

TYPED_TEST(MinimumSizeSubarraySumTest, BaseCases) {
    vector<pair<pair<int, vector<int>>, int>> tests {
        {{7,{2,3,1,2,4,3}},2},
        {{4,{1,4,4}},1},
        {{11,{1,1,1,1,1,1,1,1}},0},
        {{11, {1,2,3,4,5}},0}
    };

    for (auto& [in, expected] : tests) {
        auto& [target, nums] { in };
        EXPECT_EQ(TypeParam::run(target, nums), expected);
    }
}