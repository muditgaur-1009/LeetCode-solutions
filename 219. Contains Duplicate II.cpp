#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<pair<int, int>> num_and_idx;

        for (int i = 0; i < nums.size(); i++) {
            pair<int, int> p = make_pair(nums[i], i);
            num_and_idx.push_back(p);
        }

        sort(num_and_idx.begin(), num_and_idx.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
                  return a.first < b.first;
                });

        for (int i = 0; i < nums.size() - 1; i++) {
            if (num_and_idx[i].first == num_and_idx[i + 1].first && abs(num_and_idx[i].second - num_and_idx[i + 1].second) <= k) {
                return true;
            }
        }
        return false;
    }
};


int main() {
    
    return 0;
}