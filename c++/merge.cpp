//
// Created by 万建新 on 2020-05-09.
//

#include "merge.h"
#include <vector>

/*
 * 合并两个有序数组
 * 输入:
 * nums1 = [1,2,3,0,0,0], m = 3
 * nums2 = [2,5,6],       n = 3
 * 输出: [1,2,2,3,5,6]
 */

/**
 * @param nums1 第一个数组
 * @param m 数组长度
 * @param nums2 第二个数组
 * @param n 数组长度
 */

void Merge::mergeFn(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i,j, k = m--+--n;
    j=m+n;
    while(n>=0){
        nums1[k--] = m>=0 && nums1[m] > nums2[n] ? nums1[m--] : nums2[n--];
    }
    for(i=0;i<j;i++){
        cout << nums1[i];
    }
    cout << endl;
}


#if 0

void Merge::mergeFn(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int tag = m+n-1,i=m-1,j=n-1;
    while(i>=0&&j>=0){
        if(nums1[i]>=nums2[j]){
            nums1[tag] = nums1[i];
            i--;
            cout << "i--" << i << endl;
        }else{
            nums1[tag] = nums2[j];
            j--;
            cout << "j--" << j << endl;
        }
        cout << nums1[tag] << endl;
        tag--;
    }
    if(i<0){
        while(j>=0){
            nums1[tag] = nums2[j];
            j--;
            tag--;
        }
    }else{
        while(i>=0){
            nums1[tag] = nums1[i];
            i--;
            tag--;
        }
    }
    for(i=0;i<m+n;i++){
        cout << nums1[i];
    }
}
#endif
