#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int maximumProduct(std::vector<int>& nums) {
        int n = nums.size();

        if (n < 3) {
            // Handle cases where the vector has less than 3 elements
            return 0; // Or any other appropriate handling
        }

        std::sort(nums.begin(), nums.end());

        int maxProduct1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
        int maxProduct2 = nums[0] * nums[1] * nums[n - 1];

        return std::max(maxProduct1, maxProduct2);
    }
};
