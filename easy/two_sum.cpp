//
// Created by Марк Калюжин on 07.11.2024.
//

#include "easy.h"

// https://leetcode.com/problems/two-sum/description/
std::vector<int> twoSum(std::vector<int> &nums, int target) {
    std::map<int, std::vector<int>> map;
    for (size_t i = 0; i != nums.size(); ++i) {
        map[target - nums[i]].push_back(i);
    }
    for (auto elem: map) {
        int div = elem.first;
        if (!map[target - div].empty()) {
            if (elem.second.size() < 2) {
                elem.second.push_back(map[target - div][0]);
            }
            return elem.second;
        }
    }
    return {};
}