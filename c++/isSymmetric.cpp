//
// Created by 万建新 on 2020-05-31.
//

/**
 * 例如，二叉树 [1,2,2,3,4,4,3] 是对称的。

            1
           / \
          2   2
         / \ / \
        3  4 4  3
 */

#include "isSymmetric.h"

bool isSymmetric::index(TreeNode *root) {
    return ismirror(root,root);
}
bool isSymmetric::ismirror(TreeNode *p, TreeNode *q) {
    if(!p&&!q){
        return true;
    }
    if(!p||!q){
        return false;
    }
    if(p->val == q->val){
        return ismirror(p->left,q->right) && ismirror(p->right,q->left);
    }
    return false;
}