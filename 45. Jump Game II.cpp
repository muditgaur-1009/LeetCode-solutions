#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return 0; // Already at the last index, no jumps needed
        }
        
        int jumps = 0;
        int i = 0;
        
        while (i < n - 1) { // Loop until we reach the second last index
            int j = nums[i]; // Value at index i
            
            if (nums[i] + i >= n - 1) {
                jumps++;
                break; // If the remaining elements can be reached from this index, no need for further jumps
            }
            
            int maxJump = 0;
            int nextIndex = 0;
            
            for (int k = 1; k <= j; k++) { // Loop through the range of possible jumps
                if (nums[i + k] + k > maxJump) {
                    maxJump = nums[i + k] + k;
                    nextIndex = i + k;
                }
            }
            
            i = nextIndex;
            jumps++;
        }
        
        return jumps;
    }
};


int main() {
    
    return 0;
}