//
// Created by Марк Калюжин on 07.11.2024.
//

#ifndef LEETCODE_MEDIUM_H
#define LEETCODE_MEDIUM_H

#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <stack>
#include <queue>
#include <iostream>

using namespace std;

// https://leetcode.com/problems/zigzag-conversion/description/
string convert(const string &s, int numRows);

template<typename T>
using matrix = vector<vector<T>>;

// https://leetcode.com/problems/container-with-most-water/
int maxArea(vector<int>& height);

#endif //LEETCODE_MEDIUM_H
