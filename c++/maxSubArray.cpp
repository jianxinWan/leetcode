//
// Created by 万建新 on 2020-05-19.
//

/**
 * 最大子序和
 * 输入: [-2,1,-3,4,-1,2,1,-5,4],
 * 输出: 6
 * 解释: 连续子数组 [4,-1,2,1] 的和最大，为 6。
 */

#include "maxSubArray.h"

int maxSubArray::index(vector<int> &nums) {
    int maxSub = INT_MIN;
    int nowSum = -1;
    for(int i=0;i<nums.size();i++){
        nowSum = max(nums[i],nowSum+nums[i]);
        maxSub = max(maxSub,nowSum);
    }
    return maxSub;
}