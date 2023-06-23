#include<math.h>
#include <algorithm>


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
    int rightctr, leftctr;
    
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        } else {
            return checker(root);
        }
    }
    
    bool checker(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        
        leftctr = 0;
        rightctr = 0;
        
        if (!checker(root->left)) {
            return false;
        }
        
        if (!checker(root->right)) {
            return false;
        }
        
        int diff = abs(leftDepth(root->left) - leftDepth(root->right));
        return (diff <= 1);
    }
    
    int leftDepth(TreeNode* node) {
        if (node == nullptr) {
            return 0;
        }
        
        return max(leftDepth(node->left), leftDepth(node->right)) + 1;
    }
};