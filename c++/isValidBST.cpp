//
// Created by 万建新 on 2020-05-20.
//

#include "isValidBST.h"

bool isValidBST::index(TreeNode *root) {
    if(root){
        if(!index(root->left)) return false;
        if(last && *last>=root->val) return false;
        last = &root->val;
        if(!index(root->right)) return false;
        return true;
    }else{
        return true;
    }
}