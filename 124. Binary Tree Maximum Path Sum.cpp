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
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        maxPathSumHelper(root, maxSum);
        return maxSum;
    }

private:
    int maxPathSumHelper(TreeNode* root, int& maxSum) {
        if (root == nullptr)
            return 0;

        int leftSum = maxPathSumHelper(root->left, maxSum);
        int rightSum = maxPathSumHelper(root->right, maxSum);

        // Update the maximum sum if the current node and its children form a valid path
        int sum = root->val;
        if (leftSum > 0)
            sum += leftSum;
        if (rightSum > 0)
            sum += rightSum;
        maxSum = std::max(maxSum, sum);

        // Return the maximum sum including the current node (for the parent node's calculation)
        return root->val + std::max(0, std::max(leftSum, rightSum));
    }
};

int main() {
    
    return 0;
}