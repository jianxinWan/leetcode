//
// Created by 万建新 on 2020-05-13.
//
#include <iostream>
#include "mincostTickets.h"

using namespace std;

/**
 * 最低票价
 * @param days
 * @param costs
 * @return
 *
 * 火车票有三种不同的销售方式：
 * 一张为期一天的通行证售价为 costs[0] 美元；
 * 一张为期七天的通行证售价为 costs[1] 美元；
 * 一张为期三十天的通行证售价为 costs[2] 美元。
 *
 * -------------------------------------------------------------------------------
 *
 * 输入：days = [1,4,6,7,8,20], costs = [2,7,15]
 * 输出：11
 * 解释：
 * 例如，这里有一种购买通行证的方法，可以让你完成你的旅行计划：
 * 在第 1 天，你花了 costs[0] = $2 买了一张为期 1 天的通行证，它将在第 1 天生效。
 * 在第 3 天，你花了 costs[1] = $7 买了一张为期 7 天的通行证，它将在第 3, 4, ..., 9 天生效。
 * 在第 20 天，你花了 costs[0] = $2 买了一张为期 1 天的通行证，它将在第 20 天生效。
 * 你总共花了 $11，并完成了你计划的每一天旅行。
 */

int mincostTickets::index(vector<int> &days, vector<int> &costs) {
    this->costs = costs;
    for(int d:days){
        daySet.insert(d);
    }
    memset(memo,-1, sizeof(memo));
    return dp(1);
}

int mincostTickets::dp(int i) {
    if(i>365){
        return 0;
    }
    if(memo[i] != -1){
        return memo[i];
    }
    if(daySet.count(i)){
        memo[i] = min(min(dp(i+1)+costs[0],dp(i+7)+costs[1]),dp(i+30)+costs[2]);
    }else{
        memo[i] = dp(i+1);
    }
    return memo[i];
}