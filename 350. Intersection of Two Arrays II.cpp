#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& A, vector<int>& B) {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        vector<int>ans;
        int i=0,j=0;
        while(i<A.size() && j<B.size()){
            if(A[i]>B[j])   j++;
            else if(A[i]<B[j]) i++;
            else if(A[i]==B[j]){
                ans.push_back(A[i]);
                i++;j++;
            }
        }
        return ans;
    }
};

int main() {
    
    return 0;
}