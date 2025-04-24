// #include <gtest/gtest-typed-test.h>
#include <gtest/gtest.h>

#include "solution_0121.h"

template<typename Solution>
class MaxProfitOneTest : public ::testing::Test {};

struct Sol1 {
    static int run(vector<int>& prices) {
        return s1::maxProfit(prices);
    }
};

TYPED_TEST_SUITE(MaxProfitOneTest, testing::Types<Sol1>);

TYPED_TEST(MaxProfitOneTest, BaseCases) {
    vector v1 {7,1,5,3,6,4};
    EXPECT_EQ(TypeParam::run(v1), 5);
    vector v2 {3,8,0,5,6};
    EXPECT_EQ(TypeParam::run(v2), 6);
}

// 1 <= prices.length <= 100000
// 0 <= prices[i] <= 10000
// meaning: no need to check for negative prices (they would work tho)
// and no need to check for empty array (would crash)
TYPED_TEST(MaxProfitOneTest, EdgeCases) {
    vector v1 {7,6,4,3,1};
    EXPECT_EQ(TypeParam::run(v1), 0);
    vector v2 {7,-4,4,3,1};
    EXPECT_EQ(TypeParam::run(v2), 8);
    // vector<int> v3 {};
    // EXPECT_EQ(TypeParam::run(v3), 0);
}