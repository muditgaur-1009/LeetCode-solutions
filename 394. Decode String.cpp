#include<iostream>
#include<stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
        stack<char> chars;
        for(int i=0;i<s.length();){
            if(s[i]<='9'){
                string a;
                while(s[i]<='9'){
                    a.push_back(s[i]);
                    i++;
                }
                nums.push(stoi(a));
            }else if(s[i]!=']')
            {chars.push(s[i]);i++;}
            else{
                int x=nums.top();
                nums.pop();
                string t;
                while(chars.top()!='['){
                    t.push_back(chars.top());
                    chars.pop();
                }
                chars.pop();
                while(x--){
                    for(int i=t.length()-1;i>=0;i--)
                    chars.push(t[i]);
                }
                i++;
            }
        }

        string ans;
        while(!chars.empty()){
            ans.push_back(chars.top());
            chars.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};


int main() {
    
    return 0;
}