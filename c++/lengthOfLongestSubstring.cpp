//
// Created by 万建新 on 2020-05-10.
//
#include <unordered_set>
#include <iostream>
#include "lengthOfLongestSubstring.h"
using  namespace std;

/**
 * 无重复字符的最长子串
 * 方法:滑动窗口
 *
 * ------------------------------------------------
 * 输入: "abcabcbb"
 * 输出: 3
 * 解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
 * ------------------------------------------------
 */


#if 0
int lengthOfLongestSubstring::index(string s) {
    int  size,i=0,j,k,max=0;
    size = s.size();
    for(j = 0;j<size;j++){
        for(k = i;k<j;k++){
            cout << "s[k]-s[j]" << s[k] << " " << s[j] << endl;
            if(s[k]==s[j]){
                i = k+1;
                break;
            }
            if(j-i+1 > max)
                max = j-i+1;
            cout << "j-" << j << endl;
            cout << "i-" << i << endl;
            cout << "k-" << k << endl;
            cout << "max-" << max << endl;
        }
    }
    return max;
}
#endif

int lengthOfLongestSubstring::index(string s) {
    int n = s.size();
    unordered_set<char> occ;
    int rk =-1,i;
    int ans = 0;
    if(n == 0){
        return 0;
    }
    for(i=0;i<n;i++){
        if(i!=0){
            occ.erase(s[i]);
        }
        while (rk + 1 <n && !occ.count(s[rk+1])){
            occ.insert(s[rk+1]);
            ++rk;
        }
        ans = max(ans,rk-i+1);
    }
    return ans;
}