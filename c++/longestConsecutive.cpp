//
// Created by 万建新 on 2020-06-06.
//
#include <iostream>
#include "longestConsecutive.h"
#include <unordered_set>
/**
 * 最长连续序列
 *
 * 给定一个未排序的整数数组，找出最长连续序列的长度。
 * 要求算法的时间复杂度为 O(n)。
 *
 * 示例:
 * 输入: [100, 4, 200, 1, 3, 2]
 * 输出: 4
 * 解释: 最长连续序列是 [1, 2, 3, 4]。它的长度为 4。
 * @param nums
 * @return
 */
int longestConsecutive::index(std::vector<int> &nums) {
    std::unordered_set<int> nums_set;
    for(const int &num: nums){
        nums_set.insert(num);
    }
    int longestStreak = 0;
    for(const int& num : nums_set){
        if(!nums_set.count(num-1)){
            int currentNum = num;
            int currentStreak = 1;
            while (nums_set.count(currentNum+1)){
                currentNum+=1;
                currentStreak+=1;
            }
            longestStreak = std::max(longestStreak,currentStreak);
        }
    }
    return longestStreak;
}