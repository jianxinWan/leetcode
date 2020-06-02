//
// Created by 万建新 on 2020-06-02.
//

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include "addTwoNumbers.h"
#include <stack>
int addTwoNumbers::listToNumber(ListNode *l) {
    if(l->val == 0){
        return 0;
    }
    int number = 1;
    while(l){
        if(l->next){
            number * 10 + l->next->val;
            l=l->next;
        }else{
            number += l->val;
        }
    }
    return number;
}
ListNode* addTwoNumbers::numberToList(int number) {
    ListNode* list;
    ListNode* head;
    std::stack<int> nums;
    head = list;
    if(number == 0){
        list->val = 0;
        list->next = NULL;
    }
    while (number>0){
        nums.push(number%10);
        number/=10;
    }
    while (!nums.empty()){
        int num = nums.top();
        nums.pop();
        list->val = num;
        list->next = NULL;
        list = list->next;
    }
    return head;
}

ListNode* addTwoNumbers::index(ListNode *l1, ListNode *l2) {
    int res = listToNumber(l1) + listToNumber(l2);
    return numberToList(res);
}

ListNode* addTwoNumbers::index2(ListNode *l1, ListNode *l2) {
    ListNode vHead(0),*p = &vHead;
    int flag = 0;
    while (l1 || l2 || flag){
        int temp = 0;
        if(l1 != nullptr) temp += l1->val;
        if(l2 != nullptr) temp += l2->val;
        temp +=flag;
        flag=temp/10;
        temp = temp%10;
        ListNode *next = l1?l1:l2;
        if(next == nullptr) next = new ListNode(temp);
        next->val = temp;
        p->next = next;
        l1 = l1? l1->next: nullptr;
        l2 = l2? l2->next: nullptr;
    }
    return vHead.next;
}