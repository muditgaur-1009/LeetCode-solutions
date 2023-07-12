#include<iostream>
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
    void solve(TreeNode* root, string& ans){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){ ans += to_string(root->val); return; }
        
        ans += to_string(root->val);
        if(root->left) ans += "(";
        solve(root->left, ans);
        if(root->left) ans += ")";
        
        if(root->left == NULL) ans += "()";
        
        if(root->right) ans += "(";
        solve(root->right, ans);
        if(root->right) ans += ")";
    }
    string tree2str(TreeNode* root) {
        if(root == NULL) return "";
        string ans = "";
        solve(root, ans);
        return ans;
    }
};


int main() {
    
    return 0;
}