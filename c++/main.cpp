#include <iostream>
#include <string>
#include <vector>
//#include "lengthOfLastWord.h"
//#include "lengthOfLongestSubstring.h"
//#include "maximalSquare.h"
//#include "mincostTickets.h"
//#include "singleNumber.h"
//#include "subarraySum.h"
#include "findOrder.h"
using namespace std;

int main() {
    findOrder f;
    vector<vector<int>> prerequisites={{1,0},{2,0},{3,1},{3,2}};
    vector<int> res = f.index(4,prerequisites);
    for(int i=0;i<res.size();i++){
        cout << res[i] << endl;
    }
    return 0;
}