#include <iostream>
#include <string>
#include <vector>
//#include "lengthOfLastWord.h"
//#include "lengthOfLongestSubstring.h"
//#include "maximalSquare.h"
//#include "mincostTickets.h"
#include "singleNumber.h"
using namespace std;

int main() {
    vector<int> nums = {1,1,2,2,3};
    singleNumber s;
    cout << s.index(nums) << endl;
    cout << s.index2(nums) << endl;
    return 0;
}