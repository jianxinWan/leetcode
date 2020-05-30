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
//#include "rob.h"
#include "searchInsert.h"
using namespace std;

int main() {
    searchInsert s;
    vector<int> nums={1,2,5,7,8};
    cout << s.index(nums,3) << endl;
    return 0;
}