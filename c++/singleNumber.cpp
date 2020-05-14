//
// Created by 万建新 on 2020-05-14.
//
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include "singleNumber.h"
/**
 * 只出现一次的数字
 * @param nums
 * @return
 *
 * 说明：你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？
 *
 * 输入: [2,2,1]
 * 输出: 1
 */

int singleNumber::index(vector<int> &nums) {
    sort(nums.begin(),nums.end());
    int size = nums.size();
    for(int i=1;i<size-1;i+=2){
        if(nums[i-1] !=nums[i]){
            return nums[i-1];
        }
    }
    return nums[size-1];
}

/**
 * 数学方法 2(a+b+c) - (a+a+b+b+c) = c
 * @param nums
 * @return
 */
int singleNumber::index2(vector<int> &nums) {
    unordered_set<int> set;
    int len = nums.size(),i,sum1 = 0,sum2 = 0;
    for(int i=0;i<len;i++){
        if(!set.count(nums[i])){
            set.insert(nums[i]);
            sum1 += nums[i];
        }
        sum2 += nums[i];
    }
    return 2*sum1 - sum2;
}