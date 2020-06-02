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
#include "addTwoNumbers.h"
using namespace std;

int main() {
    addTwoNumbers a;
    ListNode* list;
    ListNode* list1;
    ListNode* list2;
    list = a.index(list1,list2);
    while (list){
        cout << list->val << endl;
        list = list->next;
    }
    return 0;
}