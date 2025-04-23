#include <gtest/gtest.h>
#include "solution.h"

using namespace std;

template <typename Solution>
class MergeAlternatelyTest : public ::testing::Test {};

struct Sol1 {
    static string run(string a, string b) {
        return s1::mergeAlternately(a, b);
    }
};

struct Sol2 {
    static string run(string a, string b) {
        return s2::mergeAlternately(a, b);
    }
};

using Implementations = ::testing::Types<Sol1, Sol2>;
TYPED_TEST_SUITE(MergeAlternatelyTest, Implementations);

TYPED_TEST(MergeAlternatelyTest, BasicCases) {
    EXPECT_EQ(TypeParam::run("abc", "pqr"), "apbqcr");
    EXPECT_EQ(TypeParam::run("ab", "pqrs"), "apbqrs");
}

TYPED_TEST(MergeAlternatelyTest, EdgeCases) {
    EXPECT_EQ(TypeParam::run("", ""), "");
    EXPECT_EQ(TypeParam::run("", "pqrstu"), "pqrstu");
    EXPECT_EQ(TypeParam::run("abcdef", ""), "abcdef");
}

TYPED_TEST(MergeAlternatelyTest, SpecialCases) {
    EXPECT_EQ(TypeParam::run("a b", "1 2"), "a1  b2"); // whitespaces
    // EXPECT_EQ(TypeParam::run("こん", "Hello"), "こHんello"); // unicode
}