//
// Created by 万建新 on 2020-05-23.
//

#include "divisorGame.h"

bool divisorGame::index(int N) {
    if(N <= 1)
    {
        return false;
    }
    return !index(N-1);
}