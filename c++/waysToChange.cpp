//
// Created by 万建新 on 2020-06-07.
//

#include "waysToChange.h"

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