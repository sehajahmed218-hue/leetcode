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
    int count = 0 ;
    pair<int,int> cal(TreeNode* root)
    {
        if(!root)
            return {0,0};
        auto left = cal(root->left);
        auto right = cal(root->right);
        int sum = left.first+right.first+root->val;
        int nodes = left.second+right.second+1;
        if(root->val==sum/nodes)    count++;
        
        return {sum,nodes};
    }
    int averageOfSubtree(TreeNode* root) {
        auto g = cal(root);
        return count;
    }
};