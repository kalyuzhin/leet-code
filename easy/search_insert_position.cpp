//
// Created by Марк Калюжин on 07.11.2024.
//

#include "easy.h"

int searchInsert(std::vector<int> &nums, int target) {
    int i = 0;
    while (i != nums.size()  && nums[i] < target) {
        ++i;
    }
    return i;
}