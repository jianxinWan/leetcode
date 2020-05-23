//
// Created by 万建新 on 2020-05-24.
//

/** 玩筹码
 *
 * 输入：chips = [1,2,3]
 * 输出：1
 * 解释：第二个筹码移动到位置三的代价是 1，第一个筹码移动到位置三的代价是 0，总代价为 1。
 */

#include "minCostToMoveChips.h"
#include <unordered_map>
int minCostToMoveChips::index(vector<int> &chips) {
    int os = 0;
    for(int i=0;i<chips.size();i++){
        if(chips[i] % 2 == 0){
            os++;
        }
    }
    return min(os,int(chips.size()-os));

}