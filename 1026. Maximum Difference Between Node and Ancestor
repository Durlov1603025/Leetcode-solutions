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
    int maxAncestorDiff(TreeNode* root) {
        if(root == NULL)
        {
            return 0;
        }
        else
        {
            return MaxDiff(root, root->val, root->val);
        }
        
    }
    int MaxDiff(TreeNode* root, int max_val, int min_val)
    {
        if(root == NULL)
        {
            return abs(max_val-min_val);
        }
        max_val = max(root->val, max_val);
        min_val = min(root->val, min_val);

        int left = MaxDiff(root->left, max_val, min_val);
        int right = MaxDiff(root->right, max_val, min_val);

        return max(left, right);
    }
};
