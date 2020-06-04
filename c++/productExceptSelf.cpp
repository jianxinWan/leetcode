//
// Created by 万建新 on 2020-06-04.
//

#include "productExceptSelf.h"

/**
 * 给你一个长度为 n 的整数数组 nums，其中 n > 1，返回输出数组 output ，其中 output[i] 等于 nums 中除 nums[i] 之外其余各元素的乘积。
 * 示例:
 * 输入: [1,2,3,4]
 * 输出: [24,12,8,6]
 * 来源：力扣（LeetCode）
 * 链接：https://leetcode-cn.com/problems/product-of-array-except-self
 * @param nums
 * @return
 */

std::vector<int> productExceptSelf::index(std::vector<int> &nums) {
    int len = nums.size();
    std::vector<int> res(len,1);
    if(len == 0){
        return res;
    }
    int left = 1,right = 1;
    for(int i=0;i<len;++i){
        res[i]*=left;
        left*=nums[i];

        res[len-i-1]*=right;
        right*=nums[len-i-1];
    }
    return res;
}