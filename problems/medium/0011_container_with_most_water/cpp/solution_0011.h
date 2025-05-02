//
// Created by kuwi on 5/2/25.
//

// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
// Find two lines that together with the x-axis form a container, such that the container contains the most water.
// Return the maximum amount of water a container can store.
// Notice that you may not slant the container.

#ifndef SOLUTION_0011_H
#define SOLUTION_0011_H

#include <vector>
using namespace std;

namespace sol_0011_a {
    int maxArea(vector<int>& height);
}

// namespace sol_0011_b {
//     int maxArea(vector<int>& height);
// }

#endif //SOLUTION_0011_H
