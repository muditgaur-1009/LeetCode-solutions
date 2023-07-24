#include<iostream>
#include <vector>
#include <queue>

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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> averages;
        if (root == NULL) {
            return averages;
        }
        
        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);
        
        while (!nodesQueue.empty()) {
            int levelSize = nodesQueue.size();
            double levelSum = 0;
            
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* currentNode = nodesQueue.front();
                nodesQueue.pop();
                
                levelSum += currentNode->val;
                
                if (currentNode->left) {
                    nodesQueue.push(currentNode->left);
                }
                
                if (currentNode->right) {
                    nodesQueue.push(currentNode->right);
                }
            }
            
            averages.push_back(levelSum / levelSize);
        }
        
        return averages;
    }
};


int main() {
    
    return 0;
}