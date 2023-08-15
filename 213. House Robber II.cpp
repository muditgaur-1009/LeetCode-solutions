#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:



    int rob(vector<int>& nums) {
       int n = nums.size();
       vector<int> ans(n,0);
       if(n == 1)
       return nums[0];
       if(n==2)
       return max(nums[0], nums[1]);

       ans[0] = nums[0], ans[1] = max(nums[0], nums[1]);
      
       for(int i=2; i < n-1;i++){
           ans[i] = max(ans[i-1], ans[i-2] + nums[i]);
       }
       
       vector<int>res(n,0);
       res[1] = nums[1], res[2] = max(nums[1], nums[2]);
      
       for(int i=3; i < n;i++){
            res[i] = max(res[i-1], res[i-2] + nums[i]);
       }
       return max(ans[n-2], res[n-1]);
    
    }
    
};

int main() {
    
    return 0;
}