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
    
    string convert(vector<int>& path){
        string ans="";
        int n = path.size();
        for(int i=0;i<n-1;i++){
            ans+=to_string(path[i]);
            ans.push_back('-');
            ans.push_back('>');
        }
        ans+=to_string(path[n-1]);
        return ans;
    }
    
    void solve(TreeNode* root, vector<int>& path,vector<string>& ans){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            path.push_back(root->val);
            ans.push_back(convert(path));
            path.pop_back();
            return;
        }
        path.push_back(root->val);
        solve(root->left,path,ans);
        solve(root->right,path,ans);
        path.pop_back();
        return;
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        vector<int>path;
        solve(root,path,ans);
        return ans;
    }
};

int main() {
    
    return 0;
}