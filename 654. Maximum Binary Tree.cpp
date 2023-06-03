#include<iostream>
#include<vector>
#include <limits>
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

class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) 
    {
        return max_tree(nums,0,nums.size()-1);
    }

    TreeNode* max_tree(vector<int>&nums,int start,int end)
    {
        int index, max = INT_MIN;

        for(int i=start;i<=end;i++)
        {
            if(max < nums[i])
            {
                max = nums[i];
                index = i;
            }
        }
        if(max == INT_MIN)
        {
            return NULL;
        }
        TreeNode *root = new TreeNode(nums[index]);
        root->left = max_tree(nums,start,index-1);
        root->right = max_tree(nums,index+1,end);
        return root;
    }
};

int main() {
    
    return 0;
}