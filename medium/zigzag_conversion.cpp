//
// Created by Марк Калюжин on 07.11.2024.
//

#include "medium.h"

string convert(const string &s, int numRows) {
    if (numRows == 1) {
        return s;
    }
    size_t n = s.size();
    string res;
    matrix<char> m(numRows);
    size_t index = 0;
    int diff = 1;
    for (size_t i = 0; i != n; ++i) {
        m[index].push_back(s[i]);
        if (!index) {
            diff = 1;
        } else if (index == numRows - 1) {
            diff = -1;
        }
        index += diff;
    }
    for (size_t i = 0; i != m.size(); ++i) {
        for (size_t j = 0; j != m[i].size(); ++j) {
            res.push_back(m[i][j]);
        }
    }
    return res;
}