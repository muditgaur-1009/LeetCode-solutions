#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<pair<int,int>> vec;
        int n=arr.size();
        for(int i=0; i<n; i++) {
            vec.push_back({arr[i],i});
        }
        sort(vec.begin(),vec.end());
        int rank=1;
        for(int i=0; i<n; i++) {
            arr[vec[i].second] = rank;
            if(i<n-1 and vec[i].first!=vec[i+1].first)
                rank++;
        }
        return arr;
    }
};


int main() {
    
    return 0;
}