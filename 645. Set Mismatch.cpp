#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        unordered_set<int> numSet;
        
        int duplicate, missing;
        
        for (int num : nums) {
            if (numSet.count(num) == 0) {
                numSet.insert(num);
            } else {
                duplicate = num;
            }
        }
        
        for (int i = 1; i <= nums.size(); i++) {
            if (numSet.count(i) == 0) {
                missing = i;
                break;
            }
        }
        
        result.push_back(duplicate);
        result.push_back(missing);
        
        return result;
    }
};



int main() {
    
    return 0;
}