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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return {};
    	
        vector<vector<int>>ans;
    	stack<TreeNode *>s1;
    	stack<TreeNode *>s2;
    	
    	s1.push(root);
    	vector<int>v;
    	while(!s1.empty() or !s2.empty()){
            v.clear();
    	    while(!s1.empty()){
    	        TreeNode *t=s1.top();
    	        v.push_back(t->val);
    	        s1.pop();
    	        if(t->left!=NULL) s2.push(t->left);
    	        if(t->right!=NULL) s2.push(t->right);
    	    }
            if(v.size()!=0) ans.push_back(v);
            v.clear();
    	    while(!s2.empty()){
    	        TreeNode *t=s2.top();
    	        v.push_back(t->val);
    	        s2.pop();
    	        if(t->right!=NULL) s1.push(t->right);
    	        if(t->left!=NULL) s1.push(t->left);
    	    }
    	    if(v.size()!=0) ans.push_back(v);
    	}
    	return ans;
        
    }
};