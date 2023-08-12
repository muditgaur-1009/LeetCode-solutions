#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
  bool isPalin(string &s, int i, int j){
        while(i <= j){
            if(s[i++] != s[j--]) return false;
        }
        return true;
    }

    int minCut(string str) {
        int N = str.size();
        
        vector<int>t(N+1,0);
        
        t[N] = 0;
        
        for(int i=N-1;i>=0;i--){
                
            int mini = INT_MAX;
                
            for(int j=i;j<N;j++){
                
                if(isPalin(str, i, j)){
                    
                    int ans = 1 + t[j+1];
                    
                    mini = min(mini, ans);
                }
                
                t[i] = mini;
            }
        }
        return t[0] - 1;
        
    }
};

int main() {
    
    return 0;
}