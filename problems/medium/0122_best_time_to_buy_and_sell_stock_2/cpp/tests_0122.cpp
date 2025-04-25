#include <gtest/gtest.h>
#include "solution_0122.h"

template<typename Solution>
class MaxProfitTwoTest : public ::testing::Test {};

struct Sol1 {
    static int run(vector<int>& prices) {
        return solutionA::maxProfit(prices);
    }
};

TYPED_TEST_SUITE(MaxProfitTwoTest, ::testing::Types<Sol1>);

TYPED_TEST(MaxProfitTwoTest, BaseCases) {
    vector v1 {7,1,5,3,6,4};
    EXPECT_EQ(TypeParam::run(v1), 7);
    vector v2 {0,2,3,4,5};
    EXPECT_EQ(TypeParam::run(v2), 5);
}

TYPED_TEST(MaxProfitTwoTest, EdgeCases) {
    vector v1 {7,6,4,3,1};
    EXPECT_EQ(TypeParam::run(v1), 0);
    vector v2 {7};
    EXPECT_EQ(TypeParam::run(v2), 0);
}