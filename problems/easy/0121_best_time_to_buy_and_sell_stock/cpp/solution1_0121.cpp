#include "solution_0121.h"

namespace s1 {
    int maxProfit(vector<int>& prices) {
        auto profit {0};
        auto min {prices[0]};
        for (auto it {prices.begin() + 1}; it != prices.end(); ++it) {
            if (*it < min)
                min = *it;
            else if (*it - min > profit)
                profit = *it - min;
        }
        return profit;
    }
}