//
// Created by 万建新 on 2020-05-15.
//


#include "subarraySum.h"
#include <unordered_map>
using namespace std;
/**
 *
 * @param nums
 * @param k
 * @return
 * 给定一个整数数组和一个整数 k，你需要找到该数组中和为 k 的连续的子数组的个数。
 * 示例 1 :
 * 输入:nums = [1,1,1], k = 2
 * 输出: 2 , [1,1] 与 [1,1] 为两种不同的情况。
 */

int subarraySum::index(vector<int> &nums, int k){
    int len = nums.size(),count = 0;
    if(len == 0){
        return 0;
    }
    for(int i=0;i<len;++i){
        int sum = 0;
        for(int j=i;j>=0;j--){
            sum += nums[j];
            if(sum == k){
                count++;
            }
        }
    }
    return count;
}

/**
 * 方法2  前缀和 + 哈希表优化
 * @param nums
 * @param k
 * @return
 */

int subarraySum::index2(vector<int> &nums, int k) {
    unordered_map<int,int> m;
    int len  = nums.size(),pre = 0,count = 0;
    m[0] = 1;
    for(int i=0;i<len;++i){
        pre+=nums[i];
        if(m.find(pre-k) !=m.end()){
            count += m[pre-k];
        }
        m[pre]++;
    }
    return count;
}