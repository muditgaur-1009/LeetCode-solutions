#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] > nums[mid + 1]) {
                // The peak element is in the left half
                end = mid;
            } else {
                // The peak element is in the right half
                start = mid + 1;
            }
        }

        return start;
    }
};



int main() {
    
    return 0;
}