#include<iostream>
#include<vector>
#include <algorithm>
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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> elements;
        preorderTraversal(root, elements);
        sort(elements.begin(), elements.end());
        return elements[k - 1];
    }
    
    void preorderTraversal(TreeNode* node, vector<int>& elements) {
        if (node == nullptr) {
            return;
        }
        elements.push_back(node->val);
        preorderTraversal(node->left, elements);
        preorderTraversal(node->right, elements);
    }
};




int main() {
    
    return 0;
}