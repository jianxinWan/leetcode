//
// Created by 万建新 on 2020-06-02.
//

#ifndef C___ADDTWONUMBERS_H
#define C___ADDTWONUMBERS_H
#define NULL 0
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class addTwoNumbers {
public:
    int listToNumber(ListNode* l);
    ListNode* numberToList(int number);
    ListNode* index(ListNode* l1, ListNode* l2);
    ListNode* index2(ListNode* l1, ListNode* l2);
};


#endif //C___ADDTWONUMBERS_H
