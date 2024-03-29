#include<iostream>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        if(root==nullptr) return new TreeNode(val);
        if(val < root->val){
            TreeNode* node=insertIntoMaxTree(root->right,val);
            root->right=node;
            return root;
        }
        TreeNode* node=new TreeNode(val);
        node->left=root;
        return node;
    }
};
int main() {
    
    return 0;
}