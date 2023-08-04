#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int slices = 0;
        int prev = 0;
        int n = nums.size();
        
        for (int i = 2; i < n; i++) {
            if (nums[i] - nums[i-1] == nums[i-1] - nums[i-2]) {
            prev++;
            slices = slices + prev;
            }
            else{
                prev = 0;
            }
        }
        
        return slices;
    }
};



int main() {
    
    return 0;
}