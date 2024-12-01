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
    TreeNode* invertTree(TreeNode* root) {
        swapLeftRightTree(root);
        return root;
    }
    void swapLeftRightTree(TreeNode* root){
        if(root == NULL)
            return;
        else{
            TreeNode* temp;
            temp = root->left;        //every root do the swap first
            root->left = root->right;
            root->right = temp;
            swapLeftRightTree(root->left); //then go to left child
            swapLeftRightTree(root->right); //after left child finish, go to right child
        }
    }
};