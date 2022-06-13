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
    bool isUnivalTree(TreeNode* root) 
    {
        while((root->left==NULL || root->left->val==root->val && isUnivalTree(root->left))            && (root->right==NULL || root->right->val==root->val && isUnivalTree(root->right)))
          return true;
        
        return false;    
    }
};

// class Solution {
// public:
//     bool isUnivalTree(TreeNode* root) 
//     {
//         if(root == nullptr) 
//             return true;
        
//         if(root->left != nullptr && root->left->val != root->val)
//             return false;
//         if(root->right != nullptr && root->right->val != root->val) 
//             return false;
        
//         return isUnivalTree(root->left) && isUnivalTree(root->right);
//     }
// };