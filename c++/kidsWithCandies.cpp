//
// Created by 万建新 on 2020-06-01.
//

#include "kidsWithCandies.h"

/**
 * 拥有最多糖果的孩子
 * 输入：candies = [4,2,1,1,2], extraCandies = 1
 * 输出：[true,false,false,false,false]
 * @param candies
 * @param extraCandies
 * @return
 */

vector<bool> kidsWithCandies::index(vector<int> &candies, int extraCandies) {
    int len = candies.size();
    vector<bool> res = vector<bool>(len, false);
    int max = candies[0];
    int min = candies[0];
    for(int i=1;i<len;i++){
        if(candies[i]>=max){
            max = candies[i];
        }
    }
    for(int i=0;i<len;i++){
        if(candies[i] + extraCandies >= max){
            res[i] = true;
        }else{
            res[i] = false;
        }
    }
    return res;
}