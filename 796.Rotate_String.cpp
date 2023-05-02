#include<iostream>
using namespace std;


class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal){
            return true;
        }
        else{
            for(int i=0; i<s.size(); i++){
                rotate(s.rbegin(),s.rbegin()+1, s.rend());
                if(s == goal){
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    
    return 0;
}