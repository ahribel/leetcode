//
// Created by kuwi on 5/2/25.
//

// n == height.length
// 2 <= n <= 105
// 0 <= height[i] <= 104

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "solution_0011.h"

template<typename Solution>
class ContainerWithMostWaterTest : public testing::Test {};

struct SolA {
    static int run(vector<int>& height) {
        return sol_0011_a::maxArea(height);
    }
};

// struct SolB {
//     static int run(vector<int>& height) {
//         return sol_0011_b::maxArea(height);
//     }
// };

using Implementations = testing::Types<SolA>;
TYPED_TEST_SUITE(ContainerWithMostWaterTest, Implementations);

TYPED_TEST(ContainerWithMostWaterTest, BaseCases) {
    vector<pair<vector<int>, int>> tests {
        // {{1,8,6,2,5,4,8,3,7},49},
        // {{8,7,2,1},7},
        {{2,3,4,5,18,17,6},17},
        // {{1,1},1}
    };
    for (auto& [in, expected] : tests) {
        EXPECT_EQ(TypeParam::run(in), expected);
    }
}