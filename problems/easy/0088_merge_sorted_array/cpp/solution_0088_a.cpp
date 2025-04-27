//
// Created by kuwi on 4/27/25.
//

#include "solution_0088.h"

namespace sol_0088_a {
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        --m; --n;
        while (m >= 0 || n >= 0) {
            if (n < 0) return;
            if (m < 0) {
                nums1[n--] = nums2[n];
                continue;
            }
            if (nums2[n] > nums1[m])
                nums1[1+m+n--] = nums2[n];
            else
                nums1[1+n+m--] = nums1[m];
        }
    }
}