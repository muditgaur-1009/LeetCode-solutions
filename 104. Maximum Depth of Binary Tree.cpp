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
    int maxDepth(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }

        int leftCtr = 1;
        int rightCtr = 1;

        if (root->left != nullptr)
        {
            leftCtr = 1 + maxDepth(root->left);
        }

        if (root->right != nullptr)
        {
            rightCtr = 1 + maxDepth(root->right);
        }

        return std::max(leftCtr, rightCtr);
    }
};

int main()
{

    return 0;
}