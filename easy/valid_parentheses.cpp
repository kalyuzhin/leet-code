//
// Created by Марк Калюжин on 07.11.2024.
//

#include "easy.h"

bool isValid(std::string s) {
    std::stack<char> stack;
    stack.push(s[0]);
    for (size_t i = 1; i != s.size(); ++i) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack.push(s[i]);
        } else if (stack.empty() || ((s[i] == ')' && stack.top() != '(') || (s[i] == ']' && stack.top() != '[') ||
                                     (s[i] == '}' && stack.top() != '{'))) {
            return false;
        } else {
            stack.pop();
        }
    }
    return stack.empty();
}