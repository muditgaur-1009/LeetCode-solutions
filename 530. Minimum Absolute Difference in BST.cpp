#include<iostream>
#include<climits> 
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
    int getMinimumDifference(TreeNode* root) {
        int minimumDiff = INT_MAX;
        TreeNode* prev = nullptr;
        inorderTraversal(root, prev, minimumDiff);
        return minimumDiff;
    }

    void inorderTraversal(TreeNode* node, TreeNode*& prev, int& minimumDiff) {
        if (node == nullptr) {
            return;
        }

        inorderTraversal(node->left, prev, minimumDiff);

        if (prev != nullptr) {
            minimumDiff = min(minimumDiff, node->val - prev->val);
        }
        prev = node;

        inorderTraversal(node->right, prev, minimumDiff);
}
};

int main() {
    
    return 0;
}