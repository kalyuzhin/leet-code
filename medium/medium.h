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
#include <limits>

using namespace std;

// https://leetcode.com/problems/zigzag-conversion/description/
string convert(const string &s, int numRows);

template<typename T>
using matrix = vector<vector<T>>;

// https://leetcode.com/problems/container-with-most-water/
int maxArea(vector<int> &height);

// https://leetcode.com/problems/remove-nth-node-from-end-of-list/
struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *removeNthFromEnd(ListNode *head, int n);

// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
int lengthOfLongestSubstring(string &s);

// https://leetcode.com/problems/reverse-integer/
int reverse(int x);


#endif //LEETCODE_MEDIUM_H
