#include <iostream>
#include <string>
//#include "lengthOfLastWord.h"
//#include "lengthOfLongestSubstring.h"
#include "maximalSquare.h"
using namespace std;

int main() {
    maximalSquare t;
    vector<vector<char>> matrix = {
            {'1','1', '1', '1' ,'1'},
            {'1','1', '1', '1' ,'1'},
            {'1','1', '1', '1' ,'1'},
            {'1','1', '1', '1' ,'1'},
            {'1','1', '1', '1' ,'1'},
    };
//    cout << t.method1(matrix) << endl;
    cout << "method2:" <<  t.method2(matrix) << endl;
    return 0;
}