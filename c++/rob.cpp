//
// Created by 万建新 on 2020-05-29.
//

#include "rob.h"
#include <iostream>
/**
 * 打家劫舍
 * @param nums
 * @return
 */
int rob::index(vector<int> &nums) {
//    if(nums.size() == 1){
//        return nums[0];
//    }else if(nums.size() == 2){
//        return max(nums[0],nums[1]);
//    }else if(nums.size() == 3){
//        return max(nums[0] + nums[2],nums[1]);
//    }
//    int res = 0;
//    for(int i=0;i<nums.size();i++){
//        if(i == nums.size()-1){
//            res+=nums[i];
//            break;
//        }
//        if(nums[i] + nums[i+2]>nums[i+1]+nums[i+3]){
//            res+=nums[i]+ nums[i+2];
//            i=i+3;
//        }else if(nums[i] + nums[i+2]<nums[i+1]+nums[i+3]){
//            res+=nums[i+1]+nums[i+3];
//            i=i+4;
//        }else if(nums[i] + nums[i+3] > nums[i+1]+nums[i+2]){
//            res+=nums[i]+nums[i+3];
//            i=i+4;
//        }else{
//            res+=nums[i]+ nums[i+2];
//            i=i+3;
//        }
//    }
//    return res;
    int len = nums.size();
    if(len == 0){
        return 0;
    }else if(len == 1){
        return nums[1];
    }
    vector<int> dp = vector<int>(len,0);
    dp[0] = nums[0];
    for(int i=0;i<len;i++){
        dp[i] = max(dp[i-1],dp[i-2] + nums[i]);
    }
    return dp[len-1];
}