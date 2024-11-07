//
// Created by Марк Калюжин on 07.11.2024.
//

#include "easy.h"

// https://leetcode.com/problems/longest-common-prefix/description/
std::string longestCommonPrefix(std::vector<std::string> &strs) {
    std::string result;
    for (size_t i = 0; i != strs[0].size(); ++i) {
        std::string elem;
        for (size_t j = 0; j != strs.size(); ++j) {
            elem += strs[j][i];
        }
        if (std::all_of(elem.begin(), elem.end(), [&](auto x) { return elem[0] == x; })) {
            result += elem[0];
        } else {
            return result;
        }
    }
    return result;
}