//
// Created by 万建新 on 2020-05-13.
//
#include <vector>
#include <unordered_set>
#ifndef C___MINCOSTTICKETS_H
#define C___MINCOSTTICKETS_H

using namespace std;

class mincostTickets {
    unordered_set<int> daySet;
    vector<int> costs;
    int memo[366]={0};
    public:
    int index(vector<int> &days,vector<int> &costs);
    int dp(int i);
};


#endif //C___MINCOSTTICKETS_H
