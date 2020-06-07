//
// Created by 万建新 on 2020-06-07.
//

#ifndef C___WAYSTOCHANGE_H
#define C___WAYSTOCHANGE_H

#include <vector>

class waysToChange {
private:
    int mod = 1000000007;
    std::vector<int> coins={25,10,5,1};
public:
    int index(int n);
};


#endif //C___WAYSTOCHANGE_H
