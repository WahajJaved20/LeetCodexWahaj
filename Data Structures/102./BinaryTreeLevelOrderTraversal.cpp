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
    void performLevelOrder(TreeNode* root,int level,vector<vector<int>> &ans){
        if(root == NULL){
            return;
        }else if(level == ans.size()){
            ans.push_back({root->val});
        }else{
            ans[level].push_back(root->val);
        }
        performLevelOrder(root->left,level+1,ans);
        performLevelOrder(root->right,level+1,ans);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        performLevelOrder(root,0,res);
        return res;
    }
};
