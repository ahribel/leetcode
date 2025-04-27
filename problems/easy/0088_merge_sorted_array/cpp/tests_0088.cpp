//
// Created by kuwi on 4/27/25.
//

// nums1.length == m + n
// nums2.length == n
// 0 <= m, n <= 200
// 1 <= m + n <= 200
// -109 <= nums1[i], nums2[j] <= 109

#include <gtest/gtest.h>
#include "solution_0088.h"

template<typename Solution>
class MergeSortedArrayTest : public testing::Test {};

struct InputData {
    vector<int> nums1;
    int m;
    vector<int> nums2;
    int n;
};

using TestData = vector<int>;

struct SolA {
    static void run(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        sol_0088_a::merge(nums1, m, nums2, n);
    }
};

using Implementations = testing::Types<SolA>;
TYPED_TEST_SUITE(MergeSortedArrayTest, Implementations);

TYPED_TEST(MergeSortedArrayTest, BaseCases) {
    vector<pair<InputData, TestData>> tests {
        {{{1,2,3,0,0,0},3,{2,5,6},3},{1,2,2,3,5,6}},
        {{{1},1,{},0},{1}},
        {{{0},0,{1},1},{1}}
    };
    for (auto& [in, expected] : tests) {
        TypeParam::run(in.nums1, in.m, in.nums2, in.n);
        EXPECT_EQ(in.nums1, expected);
    }
}