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
//#include "threeSum.h"
#include "rob.h"
using namespace std;

int main() {
    rob r;
    vector<int> nums={1,3,1,3,100};
    cout << r.index(nums) << endl;
    return 0;
}