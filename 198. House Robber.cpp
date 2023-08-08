#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int evenSum = 0;
        int oddSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                evenSum = max(evenSum + nums[i], oddSum);
            } else {
                oddSum = max(oddSum + nums[i], evenSum);
            }
        }

        return max(evenSum, oddSum);
    }
};



int main() {
    
    return 0;
}