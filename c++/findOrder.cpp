//
// Created by 万建新 on 2020-05-17.
//

#include "findOrder.h"
#include <unordered_map>
#include <iostream>
#include <stack>
/**
 *
 * @param numCourses
 * @param prerequisites
 * @return
 */
vector<int> findOrder::index(int numCourses, vector<vector<int>> &prerequisites) {
    unordered_map<int,vector<int>> graph;
    vector<int> inDegree(numCourses, 0);
    for(auto &p : prerequisites){
        graph[p[0]].push_back(p[1]);
        inDegree[p[1]]++;
    }
    vector<int> res;
    stack<int> queue;
    for(int i=0;i<inDegree.size();i++){
        if(inDegree[i] == 0) queue.push(i);
    }
    while (!queue.empty()){
        int cur = queue.top();
        queue.pop();
        res.insert(res.begin(),cur);
        vector<int> toEnQueue = graph[cur];
        if(toEnQueue.size()){
           for(int k=0;k<toEnQueue.size();k++){
               inDegree[toEnQueue[k]]--;
               if (inDegree[toEnQueue[k]] == 0) {
                   queue.push(toEnQueue[k]);
               }
           }
        }
    }
    return res;

//    unordered_map<int, vector<int>> graph;
//    vector<int> inDegree(numCourses, 0);
//    for(auto &p : prerequisites){
//        graph[p[0]].push_back(p[1]);
//        inDegree[p[1]]++;
//    }
//
//    stack<int> stk;
//    for(int i = 0; i < inDegree.size(); i++){
//        if(inDegree[i] == 0) stk.push(i);
//    }
//    stack<int> order;
//    while(!stk.empty()){
//        int c = stk.top();
//        stk.pop();
//        order.push(c);
//        for(auto & pre : graph[c]){
//            inDegree[pre]--;
//            if(inDegree[pre] == 0){
//                stk.push(pre);
//            }
//        }
//    }
//    vector<int> res;
//    if(order.size() < numCourses) return res;
//    while(!order.empty()){
//        res.push_back(order.top());
//        order.pop();
//    }
//    return res;
}