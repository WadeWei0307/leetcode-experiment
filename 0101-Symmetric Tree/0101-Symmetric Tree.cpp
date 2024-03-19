/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isEqual(root, root);
    }
    bool isEqual(TreeNode* rootLeft, TreeNode* rootRight){
        if(rootLeft == NULL && rootRight == NULL){ //both are NULL
            return true;
        }
        else if(rootLeft == NULL || rootRight == NULL){ //one side is not NULL
            return false;
        }
        return rootLeft->val == rootRight->val && isEqual(rootLeft->left, rootRight->right) && isEqual(rootLeft->right, rootRight->left);
    }
};