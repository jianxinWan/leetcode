//
// Created by 万建新 on 2020-05-16.
//
#include <math.h>
#include "mySqrt.h"

int mySqrt::index(int x) {
    if (x == 0) {
        return 0;
    }
    int ans = exp(0.5 * log(x));
    return ((long long)(ans + 1) * (ans + 1) <= x ? ans + 1 : ans);
}