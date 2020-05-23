//
// Created by 万建新 on 2020-05-23.
//

#include "divisorGame.h"

/**
 * 输入：2
 * 输出：true
 * 解释：爱丽丝选择 1，鲍勃无法进行操作。
 * @param N
 * @return
 */

bool divisorGame::index(int N) {
    if(N <= 1)
    {
        return false;
    }
    return !index(N-1);
}