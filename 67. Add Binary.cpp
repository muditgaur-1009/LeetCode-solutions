#include<iostream>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int aLen=a.size(),bLen=b.size();
        int carry=0,i=0;
        string ans="";
        while(i<aLen || i<bLen || carry!=0){
            int x=0;
            if(i<aLen)
                x= a[aLen-i-1]-'0';

            int y=0;
            if(i<bLen)
                y= b[bLen-i-1]-'0';

            ans=to_string((x+y+carry)%2) + ans;
            carry=(x+y+carry)/2;
            i++;
        }
        return ans;
    }
};

int main() {
    
    return 0;
}