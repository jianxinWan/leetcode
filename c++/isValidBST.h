//
// Created by 万建新 on 2020-05-20.
//
#define NULL 0
#ifndef C___ISVALIDBST_H
#define C___ISVALIDBST_H
using namespace std;

/*
 *
 * 输入:
    2
   / \
  1   3
  输出: true
 *
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};


class isValidBST {
public:
    int* last = NULL;
    bool index(TreeNode* root);
};


#endif //C___ISVALIDBST_H
