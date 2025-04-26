//
// Created by kuwi on 4/26/25.
//

// Constraints:
//
// 0 <= nums.length <= 100
// 0 <= nums[i] <= 50
// 0 <= val <= 100

#include <algorithm>
#include <gtest/gtest.h>
#include "solution_0027.h"

struct SolA {
    static int run(vector<int>& nums, int val) {
        return solutionA::removeElement(nums, val);
    }
};

template<typename Solution>
class RemoveElementTest : public ::testing::Test {};

using Implementations = ::testing::Types<SolA>;
TYPED_TEST_SUITE(RemoveElementTest, Implementations);

TYPED_TEST(RemoveElementTest, BaseCases) {
    vector<pair<pair<vector<int>, int>, int>> tests {
        {{{3, 2, 2, 3}, 3}, 2},
        {{{0, 1, 2, 2, 3, 0, 4, 2}, 2}, 5},
    };
    for (auto& [in, out]: tests) {
        auto& [nums, val] {in};
        TypeParam::run(nums, val);
        ASSERT_TRUE(none_of(nums.begin(), nums.begin() + out, [val](auto el){return el == val;}));
    }
}

TYPED_TEST(RemoveElementTest, EdgeCases) {
    vector<pair<pair<vector<int>, int>, int>> tests {
            {{{}, 3}, 0},
        };
    for (auto& [in, out]: tests) {
        auto& [nums, val] {in};
        TypeParam::run(nums, val);
        ASSERT_TRUE(none_of(nums.begin(), nums.begin() + out, [val](auto el){return el == val;}));
    }
}