//
// Created by 万建新 on 2020-05-11.
//
#include "maximalSquare.h"
#include <iostream>
using  namespace std;
/**
 *  method1 暴力解
 *  最大正方形
 *  在一个由 0 和 1 组成的二维矩阵内，找到只包含 1 的最大正方形，并返回其面积。
 *  输入:
 *  1 0 1 0 0
 *  1 0 1 1 1
 *  1 1 1 1 1
 *  1 0 0 1 0
 *  输出: 4
 */

int maximalSquare::method1(vector<vector<char>> &matrix) {
    int rows = matrix.size();
    int columns = matrix[0].size();
    if(rows == 0 || columns == 0){
        return 0;
    }
    int i,j,k,m,maxSide=0,currentMaxSide;
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            if(matrix[i][j] == '1'){
                maxSide = max(maxSide,1);
                currentMaxSide = min(rows - i,columns - j);
                for(k=1;k<currentMaxSide;k++){
                    bool flag = true;
                    if(matrix[i+k][j+k] == '0'){
                        break;
                    }
                    for(m=0;m<k;m++){
                        if(matrix[i+m][j+k] == '0' || matrix[i+k][j+m] == '0'){
                            flag = false;
                            break;
                        }
                        if(flag){
                            maxSide = max(maxSide,k+1);
                        }else{
                            break;
                        }
                    }
                }
            }
        }
    }
    return maxSide * maxSide;
}

/**
 * method2 动归
 * @param maxtrix
 * @return
 */
int maximalSquare::method2(vector<vector<char>> &matrix) {
    int rows = matrix.size();
    int columns = matrix[0].size();
    if(rows == 0 || columns == 0){
        return 0;
    }
    int maxSide = 0;
    vector<vector<int>>dp(rows,vector<int>(columns));
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(matrix[i][j] == '1'){
                if (i == 0 || j == 0) {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
                }
                maxSide = max(maxSide, dp[i][j]);
            }
        }
    }
    return maxSide * maxSide;
}