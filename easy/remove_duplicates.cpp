//
// Created by Марк Калюжин on 07.11.2024.
//

#include "easy.h"

int removeDuplicates(std::vector<int> &nums) {
    auto it = std::unique(nums.begin(), nums.end());
    int n = nums.end() - it;
    //nums.erase(it, nums.end());
    return it - nums.begin();
}