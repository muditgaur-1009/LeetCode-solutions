#include<iostream>
#include<vector>
using namespace std;

class Solution {
private:
   void ms(vector<int>& nums,int low,int high){
       if(low==high){
           return;
        }
       int mid=(low+high)/2;
       ms(nums,low,mid);
       ms(nums,mid+1,high);
       merge(nums,low,mid,high);
   }
   void merge(vector<int>& nums,int low,int mid,int high){
       vector<int>temp;
       int left=low;
       int right=mid+1;
       while(left<=mid && right<=high)
       {  
           if(nums[left]<=nums[right]){
               temp.push_back(nums[left]);
               left++;
           }else{
               temp.push_back(nums[right]);
               right++;
           }
        }
        while(left<=mid){
             temp.push_back(nums[left]);
               left++;
        }
        while(right<=high){
             temp.push_back(nums[right]);
               right++;
        }
        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
   }
public:

    vector<int> sortArray(vector<int>& nums) {
      int n=nums.size();
      ms(nums,0,n-1);
      return nums;
    }
};


int main()
 {
    
    return 0;
}