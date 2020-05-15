#include <iostream>
#include <string>
#include <vector>
//#include "lengthOfLastWord.h"
//#include "lengthOfLongestSubstring.h"
//#include "maximalSquare.h"
//#include "mincostTickets.h"
//#include "singleNumber.h"
#include "subarraySum.h"
using namespace std;

int main() {
    subarraySum s;
    vector<int> nums={1,1,1};
    cout << s.index(nums,2) << endl;
    cout << s.index2(nums,2) << endl;
    return 0;
}