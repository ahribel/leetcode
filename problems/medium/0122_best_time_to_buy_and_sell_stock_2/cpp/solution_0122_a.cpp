#include "solution_0122.h"

namespace solutionA {
    int maxProfit(vector<int>& prices) {
        auto profit {0};
        for (auto it {prices.begin()+1}; it != prices.end(); ++it) {
            if (*it > *(it-1))
                profit += *it - *(it-1);
        }
        return profit;
    }
}