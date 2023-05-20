#include<iostream>
using namespace std;


class Solution {
public:
    int longestPalindrome(string s) {
    int ascii[52]={0}, count=0;

    for (int i = 0; i < s.length(); i++)
    {   
        if(s[i]!='"' && (int(s[i])<=90 ) ){
        ascii[int(s[i])-65]++;
        }
        else if(s[i]!='"' && (int(s[i])>90 ) ){
        ascii[int(s[i])-72]++;
        }
        
    }

    for (int i = 0; i < 52; i++)
    {
        if (ascii[i] != 0)
        {
            count = count + ascii[i] / 2;
        }
        
    }

    if(2*count<s.length()){
        return (2*count+1);
    }else{
        return (2*count);
    }
    }
};

int main() {
    
    return 0;
}