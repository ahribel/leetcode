//
// Created by kuwi on 4/26/25.
//

#include <gtest/gtest.h>
#include "solution_0189.h"

// Constraints
// 1 <= nums.length <= 105
// -231 <= nums[i] <= 231 - 1
// 0 <= k <= 105

template<typename Solution>
class RotateArrayTest : public ::testing::Test {
};

struct SolA {
    static void run(vector<int> &nums, int k) {
        solutionA::rotate(nums, k);
    }
};

struct SolB {
    static void run(vector<int> &nums, int k) {
        solutionB::rotate(nums, k);
    }
};

struct SolC {
    static void run(vector<int> &nums, int k) {
        solutionC::rotate(nums, k);
    }
};

struct SolD {
    static void run(vector<int> &nums, int k) {
        solutionD::rotate(nums, k);
    }
};

struct SolE {
    static void run(vector<int> &nums, int k) {
        solutionE::rotate(nums, k);
    }
};

using Implementations = ::testing::Types<SolA, SolB, SolC, SolD, SolE>;
TYPED_TEST_SUITE(RotateArrayTest, Implementations);

TYPED_TEST(RotateArrayTest, BaseCases) {
    vector v1{1, 2, 3, 4, 5, 6, 7};
    vector v2{-1, -100, 3, 99};
    TypeParam::run(v1, 3);
    EXPECT_EQ(v1, (vector{5,6,7,1,2,3,4}));
    TypeParam::run(v2, 2);
    EXPECT_EQ(v2, (vector{3,99,-1,-100}));
}


TYPED_TEST(RotateArrayTest, EdgeCases) {
    vector<pair<pair<vector<int>, int>, vector<int> > > tests{
        {{{10}, 0}, {10}},
        {{{1, 100}, 3}, {100, 1}}
    };
    for (auto &[in, out]: tests) {
        TypeParam::run(in.first, in.second);
        EXPECT_EQ(in.first, out);
    }
}
