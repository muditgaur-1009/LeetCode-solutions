#include<iostream>
#include <climits>
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
    void helper(TreeNode* root, int& finalans, int count) {
        if (root == NULL) {
            return;
        }
        if (root->left == NULL && root->right == NULL) {
            finalans = std::min(finalans, count + 1);
            return;
        }
        if (root->left != NULL) {
            helper(root->left, finalans, count + 1);
        }
        if (root->right != NULL) {
            helper(root->right, finalans, count + 1);
        }
    }

    int minDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        int finalans = INT_MAX;
        int count = 0;
        helper(root, finalans, count);
        return finalans;
    }
};

int main() {
    
    return 0;
}