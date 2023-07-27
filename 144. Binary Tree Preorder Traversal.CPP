#include<iostream>
#include<vector>
using namespace std;


  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 

class Solution {
public:
    void inorder(TreeNode*root, vector<int>&res){

        if(root==NULL )return;
        
        res.push_back(root->val);
        inorder(root->left,res);  
        inorder(root->right,res);

    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        return ans;
    }
};


int main() {
    
    return 0;
}