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
//#include "searchInsert.h"
//#include "addTwoNumbers.h"
#include "longestConsecutive.h"
using namespace std;

int main() {
    longestConsecutive l;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << l.index(nums) << endl;
    return 0;
}