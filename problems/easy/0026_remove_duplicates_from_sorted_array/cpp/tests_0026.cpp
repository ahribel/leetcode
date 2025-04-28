//
// Created by kuwi on 4/28/25.
//

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "solution_0026.h"

template<typename Solution>
class RemoveDuplicatesSortedTest : public testing::Test {};

struct SolA {
    static int run(vector<int>& nums) {
        return sol_0026_a::removeDuplicates(nums);
    }
};

using Implementations = testing::Types<SolA>;
TYPED_TEST_SUITE(RemoveDuplicatesSortedTest, Implementations);

TYPED_TEST(RemoveDuplicatesSortedTest, BaseCases) {
    vector<pair<vector<int>,vector<int>>> tests {
        {{1,1,2},{1,2}},
        {{0,0,1,1,1,2,2,3,3,4},{0,1,2,3,4}}
    };

    for (auto& [in, out] : tests) {
        const auto n { TypeParam::run(in) };
        EXPECT_THAT(out, testing::ElementsAreArray(in.begin(), in.begin() + n));
    }
}