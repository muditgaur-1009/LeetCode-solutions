#include<iostream>
using namespace std;

class Solution {
public:
  bool isPossible(long long mid,int n ,int index,int maxSum){
      long long sum=(mid*(mid+1))/2;
      sum+=sum;
      sum-=mid;
      long long left=mid-(index+1);
      if(left<0)sum+=-left;
      else sum-=(left*(left+1))/2;
      long long right=mid-(n-index);
      if(right<0)sum+=-right;
      else sum-=(right*(right+1))/2;
      return sum<=maxSum;
  }
    int maxValue(int n, int index, int maxSum) {
         long long l=1,r=1e9;
         int ans=-1;
         while(l<=r){
             long long mid=(l+r)/2;
             if(isPossible(mid,n,index,maxSum)){
                 ans=mid;
                 l=mid+1;
             }else{
                 r=mid-1;
             }
         }
         return ans;
    }
};


int main() {
    
    return 0;
}