//
// Created by 万建新 on 2020-05-11.
//
#include "maximalSquare.h"

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

int maximalSquare::method1(vector<vector<char>> &maxtrix) {
    int rows = maxtrix.size();
    int columns = maxtrix[0].size();
    if(rows == 0 || columns == 0){
        return 0;
    }
    int i,j,k,m,maxSide=0,currentMaxSide;
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            if(maxtrix[i][j] == '1'){
                maxSide = max(maxSide,1);
                currentMaxSide = min(rows - i,columns - j);
                for(k=1;k<currentMaxSide;k++){
                    bool flag = true;
                    if(maxtrix[i+k][j+k] == '0'){
                        break;
                    }
                    for(m=0;m<k;m++){
                        if(maxtrix[i+m][j+k] == '0' || maxtrix[i+k][j+m] == '0'){
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
int maximalSquare::method2(vector<vector<char>> &maxtrix) {
    return 0;
}