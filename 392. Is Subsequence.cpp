#include<iostream>
using namespace std;


class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int i=0,j=0,count=0;
        while(i<s.length() && j<t.length())
        {
            if(s[i]==t[j])
            {
                count=count+1;
                i++;
            }
            j++;
        } 
        if(count==s.length()) 
            return true;
        return false;
    }
};


int main() {
    
    return 0;
}