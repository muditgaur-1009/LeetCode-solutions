#include<iostream>
using namespace std;

// The API isBadVersion is defined for you.
 bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
         long int lo = 0;           // invalid case
       long int hi = n;           // valid cases range from [1,n]
     long    int mid;
        while (lo + 1 < hi){
            mid = (lo + hi )/2;
            if (isBadVersion(mid)) hi = mid;
            else lo = mid;
        }
        return hi;
    }
};

int main() {
    
    return 0;
}