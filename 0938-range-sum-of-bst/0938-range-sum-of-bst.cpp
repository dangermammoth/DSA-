/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    long long sum = 0;
    void inorder(TreeNode* root,int l,int h) {
        if(root!=nullptr){
              inorder(root->left,l,h);
        if(root->val>=l && root->val<=h)sum=sum+root->val;
        inorder(root->right,l,h);
        }
      
    }
    int rangeSumBST(TreeNode* root, int l, int h) {
        inorder(root,l,h);
        return sum;
    }
};