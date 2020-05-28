#include <iostream>
#include <string>
#include <vector>
//#include "lengthOfLastWord.h"
//#include "lengthOfLongestSubstring.h"
//#include "maximalSquare.h"
//#include "mincostTickets.h"
//#include "singleNumber.h"
//#include "subarraySum.h"
//#include "findOrder.h"
//#include "maxProduct.h"
//#include "maxSubArray.h"
//#include "longestPalindrome.h"
//#include "divisorGame.h"
#include "threeSum.h"
using namespace std;

int main() {
    threeSum t;
    vector<int> nums={1,-1,-1,0};
    vector<vector<int>> res;
    res = t.index(nums);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout << res[i][j] << ',';
        }
        cout << endl;
    }
    return 0;
}