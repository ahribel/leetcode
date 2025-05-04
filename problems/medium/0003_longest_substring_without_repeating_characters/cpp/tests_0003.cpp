//
// Created by kuwi on 5/4/25.
//

// Constraints:
// 0 <= s.length <= 5 * 104
// s consists of English letters, digits, symbols and spaces.

#include <gtest/gtest.h>
#include "solution_0003.h"

template<typename Solution>
class LongestSubstringWithoutRepeatingCharactersTest : public testing::Test {};

struct SolA {
    static int run(string s) {
        return sol_0003_a::lengthOfLongestSubstring(move(s));
    }
};

using Implementations = testing::Types<SolA>;
TYPED_TEST_SUITE(LongestSubstringWithoutRepeatingCharactersTest, Implementations);

TYPED_TEST(LongestSubstringWithoutRepeatingCharactersTest, BaseCases) {
    vector<pair<string, int>> tests {
        {"abcabcbb"s, 3},
        {"bbbbb"s, 1},
        {"pwwkew"s, 3},
        {"abcdbef"s, 5},
        {"aab"s, 2}
    };

    for (auto& [in, expected] : tests) {
        EXPECT_EQ(TypeParam::run(move(in)), expected);
    }
}