class Solution {
public:

    long long binarrySearch(int n){
        int s = 0;
        int e = n;
        long long int ans = -1;
        long long int mid = s + (e-s)/2;

        while(s<=e){
            long long int squre = mid*mid;
            if(squre == n)
            return mid;
            if(squre < n){
                ans = mid;
                s = mid +1;
            }
            else{
                e = mid -1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

    int mySqrt(int x) {
        return binarrySearch(x);
        
    }
};