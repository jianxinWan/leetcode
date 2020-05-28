//
// Created by 万建新 on 2020-05-28.
//

#include "threeSum.h"
#include <iostream>
using namespace std;

/**
 * 三数之和
 * 给定数组 nums = [-1, 0, 1, 2, -1, -4]，
 * 满足要求的三元组集合为：
 * [
 *  [-1, 0, 1],
 *  [-1, -1, 2]
 * ]
 * 来源：力扣（LeetCode）
 * 链接：https://leetcode-cn.com/problems/3sum
 * 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 * @param nums
 * @return
 */

vector<vector<int>> threeSum::index(vector<int> &nums) {
    vector<vector<int>> ans;
    if(nums.size() < 3){
        return ans;
    }
    sort(nums.begin(),nums.end());
    if(nums[0] > 0){
        return ans;
    }
    int i=0;
    while (i<nums.size()){
        if(nums[i] > 0) break;
        int left = i+1,right = nums.size()-1;
        while(left<right){
            if(nums[i]+nums[left]+nums[right] == 0){
                ans.push_back({nums[i],nums[left],nums[right]});
                while(left<right&&nums[left]==nums[left+1])
                    left++;
                while(left<right&&nums[right] == nums[right-1])
                    right--;
                left++;
                right--;
            }else if(nums[i]+nums[left] > 0 - nums[right]){
                right--;
            }else{
                left++;
            }
        }
        while (i+1<nums.size() && nums[i] == nums[i+1]){
            i++;
        }
        i++;
    }
    return ans;
}
