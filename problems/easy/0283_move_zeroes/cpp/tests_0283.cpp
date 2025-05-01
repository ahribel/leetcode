//
// Created by kuwi on 5/1/25.
//

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "solution_0283.h"

// Constraints:
//
// 1 <= nums.length <= 104
// -231 <= nums[i] <= 231 - 1

template<typename Solution>
class MoveZeroesTest : public testing::Test {};

struct SolA {
    static void run(vector<int>& nums) {
        return sol_0283_a::moveZeroes(nums);
    }
};

struct SolB {
    static void run(vector<int>& nums) {
        return sol_0283_b::moveZeroes(nums);
    }
};

using Implementations = testing::Types<SolA, SolB>;
TYPED_TEST_SUITE(MoveZeroesTest, Implementations);

TYPED_TEST(MoveZeroesTest, BaseCases) {
    vector<pair<vector<int>,vector<int>>> tests {
        {{0,1,0,3,12},{1,3,12,0,0}},
        {{0},{0}}
    };
    for (auto& [in, expected] : tests) {
        TypeParam::run(in);
        EXPECT_EQ(in, expected);
    }
}