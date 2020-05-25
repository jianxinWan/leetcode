//
// Created by 万建新 on 2020-05-25.
//

/**
 * 实现获取下一个排列的函数，算法需要将给定数字序列重新排列成字典序中下一个更大的排列。
如果不存在下一个更大的排列，则将数字重新排列成最小的排列（即升序排列）。
必须原地修改，只允许使用额外常数空间。

以下是一些例子，输入位于左侧列，其相应输出位于右侧列。
1,2,3 → 1,3,2
3,2,1 → 1,2,3
1,1,5 → 1,5,1
 */

#include "nextPermutation.h"
void nextPermutation::index(vector<int> &nums) {
    if(nums.size() <= 1) return;
    int j = nums.size() - 1;
    while(j-1>=0 && nums[j-1] >= nums[j]){ --j;}
    if(j == 0){
        for(int i = 0; i < nums.size()/2; ++i){
            swap(nums[i], nums[nums.size() - 1 - i]);
        }
        return ;
    }
    int r = nums.size() - 1;
    while(r >= j){
        if(nums[r] > nums[j-1]) break;
        --r;
    }
    swap(nums[r], nums[j-1]);
    int cnt = (nums.size() - j)/2;
    int i = 0;
    while(cnt > 0){
        swap(nums[j+i], nums[nums.size() - 1 - i]);
        ++i; --cnt;
    }
    return;
}