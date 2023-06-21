#include<iostream>
#include<vector>
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
    void start(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
        {
            v.push_back(200);
            return;
        }
        v.push_back(root->val);
        start(root->left, v);
        start(root->right, v);
    }
    void end(TreeNode *root, vector<int> &w)
    {
        if (root == NULL)
        {
            w.push_back(200);
            return;
        }
        w.push_back(root->val);
        end(root->right, w);
        end(root->left, w);
    }

public:
    bool isSymmetric(TreeNode *root)
    {
        vector<int> v;
        vector<int> w;
        TreeNode *Left = root->left;
        TreeNode *Right = root->right;
        start(Left, v);
        end(Right, w);
        if (v == w)
        {
            return true;
        }
        return false;
    }
};

int main() {
    
    return 0;
}