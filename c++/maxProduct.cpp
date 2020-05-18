//
// Created by 万建新 on 2020-05-18.
//

/**
 * 乘积最大子数组
 * 输入: [2,3,-2,4]
 * 输出: 6
 * 解释: 子数组 [2,3] 有最大乘积 6。
 */

#include "maxProduct.h"
int maxProduct::index(vector<int> &nums) {
    int maxNum,IMax=1,IMin=1;
    for(int i=0;i<nums.size();i++){
        if(nums[i] <0){
            int temp = IMax;
            IMax = IMin;
            IMin = temp;
        }
        IMax = max(IMax*nums[i],nums[i]);
        IMin = min(IMin*nums[i],nums[i]);
        maxNum = max(IMax,maxNum);
    }
    return maxNum;
}