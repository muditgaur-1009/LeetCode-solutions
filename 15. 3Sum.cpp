#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        
        // Sorting the input vector in ascending order
        std::sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        for (int i = 0; i < n - 2; ++i) {
            // Avoid duplicates for the first element
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            
            int target = -nums[i]; // The target sum for the remaining two elements
            int left = i + 1;      // Pointer to the element next to nums[i]
            int right = n - 1;     // Pointer to the last element
            
            while (left < right) {
                int sum = nums[left] + nums[right];
                
                if (sum == target) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // Avoid duplicates for the second and third elements
                    while (left < right && nums[left] == nums[left + 1])
                        ++left;
                    while (left < right && nums[right] == nums[right - 1])
                        --right;
                    
                    // Move the pointers
                    ++left;
                    --right;
                } else if (sum < target) {
                    ++left;
                } else {
                    --right;
                }
            }
        }
        
        return result;
    }
};
