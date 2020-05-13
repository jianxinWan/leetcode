#include <iostream>
#include <string>
#include <vector>
//#include "lengthOfLastWord.h"
//#include "lengthOfLongestSubstring.h"
//#include "maximalSquare.h"
#include "mincostTickets.h"
using namespace std;

int main() {
    mincostTickets s;
    vector<int> days = {1,4,6,7,8,20};
    vector<int> costs = {2,7,15};
    cout << s.index(days,costs) << endl;
    return 0;
}