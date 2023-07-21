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
    void deleteNode(TreeNode *&root, int target)
    {
        if (root->left)
            deleteNode(root->left, target);
        if (root->right)
            deleteNode(root->right, target);

        if (!root->left && !root->right && root->val == target)
        {
            root = NULL;
        }
    }
    TreeNode *removeLeafNodes(TreeNode *root, int target)
    {
        if (!root)
            return NULL;

        deleteNode(root, target);
        return root;
    }
};

int main()
{

    return 0;
}