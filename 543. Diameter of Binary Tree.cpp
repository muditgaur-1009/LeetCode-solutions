#include<math>
#include<stdio.h>
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
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDiameter = 0;
        height(root, maxDiameter);
        return maxDiameter;
    }

    int height(TreeNode* root, int& maxDiameter) {
        if (root == nullptr) {
            return 0;
        }

        int leftHeight = height(root->left, maxDiameter);
        int rightHeight = height(root->right, maxDiameter);

        // Update the max diameter if the current path is longer
        maxDiameter = max(maxDiameter, leftHeight + rightHeight);

        // Return the height of the current node
        return max(leftHeight, rightHeight) + 1;
    }
};