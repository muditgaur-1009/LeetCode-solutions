#include<iostream>
using namespace std;


class Solution {
public:
    int balancedStringSplit(string s) {
        int l = 0, r = 0, c = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'L')
                l++;
            else
                r++;

            if(l == r){
                c++;
                l = 0;
                r = 0;
            }
        }

        return c;
    }
};

int main() {
    
    return 0;
}