//
// Created by 万建新 on 2020-05-21.
//
#include <vector>
#include "longestPalindrome.h"
#include <iostream>
#include <string>
using namespace std;

/**
 * 最长回文字串
 * 输入: "babad"
 * 输出: "bab"
 * 注意: "aba" 也是一个有效答案。
 * @param s
 * @return
 */

bool longestPalindrome::isPalindrome(string s) {
    int len = s.size();
    for(int i=0;i<len/2;i++){
        if(s[i] != s[len-i-1]){
            return false;
        }
    }
    return true;
}

string longestPalindrome::index(string s) {
    int length=s.length();
    if(length<=1)
    {
        return s;
    }
    vector<vector<int>>res(length,vector<int>(length,0));
    //先初始化二维数组（对角线）
    for(int i=0;i<length;i++)
    {
        res[i][i]=1;
    }
    int start=0;//记录最大回文子串的开始位置
    int maxlength=1;//记录最大回文子串的长度
    for(int i=1;i<length;i++)//两层for循环遍历每一个位置到另一个位置的情况
    {
        for(int j=0;j<i;j++)
        {
            if(s[i]==s[j])
            {
                if(i-j<3)//如果如果两个相等字符之间只有一个字符，那么一定回文
                {
                    res[j][i]=1;
                }
                else
                {
                    res[j][i]=res[j+1][i-1];
                }
            }
            if(res[j][i])//当j到i之间的子串回文时判断其长度是否最大，然后更改
            {
                if(i-j+1>maxlength)
                {
                    maxlength=i-j+1;
                    start=j;
                }
            }

        }
    }
    return s.substr(start,maxlength);
}

string longestPalindrome::index2(string s) {
    int len = s.size();
    if(len <=1) return s;
    int start = 0;
    int maxLen = 1;
    vector<int> dp(s.size(),0);
    for(int end=1;end<len;end++){
        for(int begin=0;begin<end;begin++){
            if(s[begin] == s[end]){
                if(end-begin<3){
                    dp[begin] = 1;
                }else{
                    dp[begin] = dp[begin+1];
                }
            }else{
                dp[begin] = 0;
            }
            if(dp[begin]){
                if(end-begin+1 > maxLen){
                    maxLen = end-begin+1;
                    start = begin;
                }
            }
        }
    }
    return  s.substr(start, maxLen);
//    if (s.size() <= 1) return s;
//
//    std::vector<int> dp(s.size(), 0);
//
//    int start = 0;
//    int maxLength = 1;
//    for (int i = 1; i < s.size(); i++) {
//        for (int j = 0; j < i; j++) {
//            if (s[i] == s[j]) {
//                if (i - j < 3)
//                    dp[j] = 1;
//                else
//                    dp[j]= dp[j + 1];
//            } else {
//                dp[j] = 0;
//            }
//            if (dp[j]) {
//                int length = i - j + 1;
//                if (length > maxLength) {
//                    maxLength = length;
//                    start = j;
//                }
//            }
//        }
//    }
//    return s.substr(start, maxLength);
}