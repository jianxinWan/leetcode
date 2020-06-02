//
// Created by 万建新 on 2020-06-02.
//
#include <math.h>
#include "sumNums.h"
using namespace std;
int sumNums::index(int n) {
    return (int) (pow(n, 2) + n) >> 1;
}