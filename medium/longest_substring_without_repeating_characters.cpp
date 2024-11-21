//
// Created by Марк Калюжин on 17.11.2024.
//

#include "medium.h"

int lengthOfLongestSubstring(string &s) {
    int res = 0;
    char ch;
    unordered_set<char> used;
    unordered_map<char, pair<unordered_set<char>, size_t>> chars;
    for (size_t i = 0; i != s.size(); ++i) {
        ch = s[i];
        if (used.find(ch) != used.end()) {
            used.erase(ch);
            for (char c: chars[ch].first) {
                if (chars[ch].second > chars[c].second) {
                    used.erase(c);
                }
            }
        }
        chars[ch].first = used;
        chars[ch].second = i;
        used.insert(ch);
        res = used.size() > res ? used.size() : res;
    }

    return res;
}

//int lengthOfLongestSubstring(string &s) {
//    int res, cur = res = 0;
//    char ch;
//    unordered_map<char, size_t> chars;
//    for (size_t i = 0; i != s.size(); ++i) {
//        ch = s[i];
//        if (chars[ch]) {
//            cur = i - chars[ch] - 1;
//        }
//        res = res < cur ? cur : res;
//        chars[ch] = i;
//    }
//
//    return res;
//}

// dummy solution
//int lengthOfLongestSubstring(string &s) {
//    int res, cur = res = 0;
//    for (size_t i = 0; i != s.size() - 1; ++i) {
//        cur = 0;
//        for (size_t j = 1; j != s.size(); ++j) {
//            if (s[i] != s[j]) {
//                ++cur;
//            } else {
//                continue;
//            }
//        }
//        res = res < cur ? cur : res;
//    }
//    return res;
//}


/*
 * TESTS:
 * bpfbhmipx
 * abcabcbb
 * bbbbb
 * pwwkew
 * dvdf
 * ckilbkd
 * abba
 * aabaab!bb
*/