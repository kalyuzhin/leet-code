//
// Created by Марк Калюжин on 07.11.2024.
//

#include "easy.h"

int lengthOfLastWord(std::string s) {
    int count = 0;
    bool flag = false;
    for (auto i = s.rbegin(); i != s.rend(); ++i) {
        if (*i != ' ') {
            flag = true;
            ++count;
        }
        if (*i == ' ' && flag) {
            break;
        }
    }
    std::cout << count;
    return count;
};