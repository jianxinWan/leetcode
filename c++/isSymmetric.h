//
// Created by 万建新 on 2020-05-31.
//

#ifndef C___ISSYMMETRIC_H
#define C___ISSYMMETRIC_H

#define NULL 0
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class isSymmetric {
public:
    bool index(TreeNode* root);
    bool ismirror(TreeNode* p,TreeNode* q);
};


#endif //C___ISSYMMETRIC_H
