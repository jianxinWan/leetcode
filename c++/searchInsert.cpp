//
// Created by 万建新 on 2020-05-30.
//

#include "searchInsert.h"
int searchInsert::index(vector<int> &nums, int target) {
    int len = nums.size();
    if(target>nums[len-1]){
        return len;
    }
    if(target == nums[len-1]){
        return len-1;
    }
    for(int i=0;i<len-1;i++){
        if(nums[i] < target && nums[i+1] > target){
            return i+1;
        }
        if(nums[i] == target){
            return i;
        }
    }
    return 0;
}