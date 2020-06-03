//
// Created by 万建新 on 2020-06-03.
//

#include "new21Game.h"
#include <vector>

/**
 *
 * 输入：N = 10, K = 1, W = 10
输出：1.00000
说明：爱丽丝得到一张卡，然后停止。
 * @param N
 * @param K
 * @param W
 * @return
 */
double new21Game::index(int N, int K, int W) {
    if (K == 0) {
        return 1.0;
    }
    std::vector<double> dp(K + W);
    for (int i = K; i <= N && i < K + W; i++) {
        dp[i] = 1.0;
    }
    dp[K - 1] = 1.0 * std::min(N - K + 1, W) / W;
    for (int i = K - 2; i >= 0; i--) {
        dp[i] = dp[i + 1] - (dp[i + W + 1] - dp[i + 1]) / W;
    }
    return dp[0];
}