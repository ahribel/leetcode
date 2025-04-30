//
// Created by kuwi on 4/30/25.
//

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "solution_0080.h"

template <typename Solution>
class RemoveDuplicatesSortedTwoTest : public testing::Test {};

struct SolA {
    static int run(vector<int>& nums) {
        return sol_0080_a::removeDuplicates(nums);
    }
};

using Implementations = testing::Types<SolA>;
TYPED_TEST_SUITE(RemoveDuplicatesSortedTwoTest, Implementations);

TYPED_TEST(RemoveDuplicatesSortedTwoTest, BaseCases) {
    vector<pair<vector<int>, vector<int>>> tests {
        {{1,1,1,2,2,3}, {1,1,2,2,3}},
        {{0,0,1,1,1,1,2,3,3},{0,0,1,1,2,3,3}}
    };

    for (auto& [in, expected]: tests) {
        const auto n { TypeParam::run(in) };
        EXPECT_THAT(expected, testing::ElementsAreArray(in.begin(), in.begin() + n));
    }
}