//
// Created by kuwi on 4/26/25.
//

// Constraints:
//
// 1 <= nums.length <= 5 * 104
// -109 <= nums[i] <= 109

#include <gtest/gtest.h>
#include "solution_0169.h"

template<typename Solution>
class MajorityElementTest : public ::testing::Test {};

struct SolA {
    static int run(vector<int>& nums) {
        return solutionA::majorityElement(nums);
    }
};

struct SolB {
    static int run(vector<int>& nums) {
        return solutionA::majorityElement(nums);
    }
};

using Implementations = ::testing::Types<SolA, SolB>;
TYPED_TEST_SUITE(MajorityElementTest, Implementations);

TYPED_TEST(MajorityElementTest, BaseCases) {
    vector<pair<vector<int>,int>> tests {
        {{3,2,3}, 3},
        {{2,2,1,1,1,2,2}, 2}
    };

    for (auto& [nums, elem] : tests) {
        EXPECT_EQ(TypeParam::run(nums), elem);
    }
}