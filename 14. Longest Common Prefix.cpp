#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        for(int i=0; i<strs[0].size(); i++){
            char ch = strs[0][i];
            
            bool isPresent = true;
            for(int j=1; j<strs.size(); j++){
                if(ch != strs[j][i]){
                   isPresent = false; 
                   break;
                }   
            }
            if(!isPresent)
               break;
            prefix += ch;   
        }
        return prefix;
    }
};

int main() {
    
    return 0;
}