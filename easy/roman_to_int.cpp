//
// Created by Марк Калюжин on 07.11.2024.
//

#include "easy.h"

// https://leetcode.com/problems/roman-to-integer/submissions/1130837064/
int romanToInt(std::string s) {
    int result = 0;
    std::map<char, int> map{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
    };
    for (size_t i = 0; i != s.size(); ++i) {
        result = map[s[i]] < map[s[i + 1]] ? result -= map[s[i]] : result += map[s[i]];
    }
    return result;
}