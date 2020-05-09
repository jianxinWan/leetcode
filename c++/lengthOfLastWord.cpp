//
// Created by 万建新 on 2020-05-09.
//
#include <iostream>
#include "lengthOfLastWord.h"

using namespace std;
int lengthOfLastWord::lengthOfLastWordFn(string s) {
    int y = s.size()-1;
    while(y >= 0 && s[y] == ' ' )
        y--;
    int x = y;
    while(x >= 0 && s[x] !=' ')
        x--;
    return y-x;
}