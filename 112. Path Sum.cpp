#include <iostream>
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

class Solution
{
public:
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        if (root == nullptr)
            return false;

        return backtrack(root, targetSum, 0);
    }

private:
    bool backtrack(TreeNode *node, int targetSum, int currentSum)
    {
        if (node == nullptr)
            return false;

        currentSum += node->val;

        if (node->left == nullptr && node->right == nullptr)
        {
            if (currentSum == targetSum)
                return true;
            else
                return false;
        }

        bool left = backtrack(node->left, targetSum, currentSum);
        bool right = backtrack(node->right, targetSum, currentSum);

        return left || right;
    }
};

int main()
{

    return 0;
}