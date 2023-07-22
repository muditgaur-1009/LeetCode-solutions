#include<iostream>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1){
            return 1;
        }if(n==3){
            return 2;
        }
        int low = 1;
        int high = n/2;
        while(low<=high){
            long long mid = low+(high-low)/2;
            long long ans = mid*(mid+1)/2;
            if(ans==n){
                return mid;
            }else if(ans>n){
                high = mid-1;
            }else{
                low=mid+1;
            }
        }return high;
    }
};



int main() {
    
    return 0;
}