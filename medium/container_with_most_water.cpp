//
// Created by Марк Калюжин on 14.11.2024.
//

#include "medium.h"

typedef long long ll;
typedef vector<ll> vll;

int maxArea(vector<int> &height) {
    size_t i = 0, j = height.size() - 1;
    int m, res, cur = res = 0;
    while (i < height.size() && j > 0) {
        m = min(height[i], height[j]);
        cur = m * (j - i);
        if (height[i] < height[j]) {
            ++i;
        } else {
            --j;
        }
        if (res < cur) {
            res = cur;
        }
    }
    return res;
}