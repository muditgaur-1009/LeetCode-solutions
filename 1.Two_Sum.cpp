#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
       // using Hashmap [SC-O(n), TC-O(n)]
       unordered_map<int,int> mp;
       int i;
       for(i=0;i<n.size();i++)
       {
            if(mp.find(n[i]) == mp.end())
               mp[t-n[i]] = i;
            else
               return {i,mp[n[i]]};
       }
       return {};
    }
};


int main() {
    
    return 0;
}