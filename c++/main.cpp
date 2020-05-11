#include <iostream>
#include <string>
//#include "lengthOfLastWord.h"
//#include "lengthOfLongestSubstring.h"
#include "maximalSquare.h"
using namespace std;

int main() {
    maximalSquare t;
    vector<vector<char>> maxtrix = {
            {'1','0', '1', '0' ,'0'},
            {'1','0', '1', '1' ,'1'},
            {'1','0', '1', '1' ,'1'},
            {'1','0', '1', '1' ,'1'},
            {'1','0', '1', '0' ,'0'},
    };
    cout << t.method1(maxtrix) << endl;
    return 0;
}