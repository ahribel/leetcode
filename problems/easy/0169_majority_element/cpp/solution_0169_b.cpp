//
// Created by kuwi on 4/26/25.
//

#include <algorithm>
#include <unordered_map>

#include "solution_0169.h"

namespace solutionB {
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> buckets;
        for (const auto& el : nums) {
            buckets[el]++;
        }
        return std::max_element(
            buckets.begin(),
            buckets.end(),
            [](const auto& a, const auto& b) {
                return a.second < b.second;
            })->first;
    }
}