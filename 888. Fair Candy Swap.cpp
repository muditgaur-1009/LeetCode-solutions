#include<iostream>
#include<unordered_set>
#include<vector>
#include <numeric>

using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumAlice = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int sumBob = accumulate(bobSizes.begin(), bobSizes.end(), 0);
        
        unordered_set<int> aliceCandies(aliceSizes.begin(), aliceSizes.end());
        int target = (sumAlice + sumBob) / 2;
        
        for (int bobCandy : bobSizes) {
            int aliceCandy = target - (sumBob - bobCandy);
            if (aliceCandies.find(aliceCandy) != aliceCandies.end()) {
                return {aliceCandy, bobCandy};
            }
        }
        
        return {}; // If no solution is found
    }
};


int main() {
    
    return 0;
}