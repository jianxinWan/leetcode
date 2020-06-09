//
// Created by 万建新 on 2020-06-07.
//

#include "waysToChange.h"

/**
 * 硬币。给定数量不限的硬币，币值为25分、10分、5分和1分，编写代码计算n分有几种表示法。(结果可能会很大，你需要将结果模上1000000007)

示例1:

 输入: n = 5
 输出：2
 解释: 有两种方式可以凑成总金额:
5=5
5=1+1+1+1+1

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/coin-lcci
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 * @param n
 * @return
 */

int waysToChange::index(int n) {
    std::vector<int> f(n+1);
    f[0] = 1;
    for (int c = 0; c < 4; ++c) {
        int coin = coins[c];
        for (int i = coin; i <= n; ++i) {
            f[i] = (f[i] + f[i - coin]) % mod;
        }
    }
    return f[n];
}