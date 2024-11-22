//
// Created by Марк Калюжин on 22.11.2024.
//

#include "medium.h"

int reverse(int x) {
    int res, digit = res = 0;
    while (x != 0) {
        if (abs(res) > INT_MAX / 10) {
            return 0;
        }
        digit = x % 10;
        res *= 10;
        res += digit;
        x /= 10;
    }

    return res;
}