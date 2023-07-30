#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> nums;
        for (int i = 1; i <= n; ++i) {
            nums.push_back(i);
        }
        int index = 0;
        return findWinner(nums, index, k);
    }
    
    int findWinner(vector<int>& nums, int index, int k) {
        if (nums.size() == 1) {
            return nums[0];
        }
        
        // Calculate the index to eliminate based on k and current index
        index = (index + k - 1) % nums.size();
        
        // Eliminate the element at the calculated index
        nums.erase(nums.begin() + index);
        
        // Recursively find the winner with the updated array
        return findWinner(nums, index, k);
    }
};


int main() {
    
    return 0;
}