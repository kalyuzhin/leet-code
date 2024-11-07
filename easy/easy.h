//
// Created by Марк Калюжин on 07.11.2024.
//

#ifndef LEETCODE_EASY_H
#define LEETCODE_EASY_H

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

// https://leetcode.com/problems/two-sum/description/
std::vector<int> twoSum(std::vector<int> &nums, int target);

// https://leetcode.com/problems/roman-to-integer/description/
int romanToInt(std::string s);

// https://leetcode.com/problems/longest-common-prefix/description/
std::string longestCommonPrefix(std::vector<std::string> &strs);

// https://leetcode.com/problems/valid-parentheses/description/
bool isValid(std::string s);

// https://leetcode.com/problems/palindrome-number/description/
bool isPalindrome(int x);

// https://leetcode.com/problems/merge-two-sorted-lists/description/
struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2);

// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
int removeDuplicates(std::vector<int> &nums);

// https://leetcode.com/problems/search-insert-position/description/
int searchInsert(std::vector<int> &nums, int target);

// https://leetcode.com/problems/length-of-last-word/description/
int lengthOfLastWord(std::string s);

// https://leetcode.com/problems/plus-one/description/
std::vector<int> plusOne(std::vector<int> &digits);

#endif //LEETCODE_EASY_H
