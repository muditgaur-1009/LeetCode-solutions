#include<bits/stdc++.h>
#include<stack>
#include<vector>
class Solution {
public:
    int calPoints(vector<string>& op) 
    {
        stack<int> st;
        string ch = op[0];
        st.push(stoi(ch));
        for(int i=1; i<op.size();i++)
        {
            ch = op[i];

            if(ch == "C" ){
                st.pop();
            }
            else if(ch == "D" ){
                st.push(2*st.top());
            }
            else if(ch == "+")
            {
                int temp = st.top();
                st.pop();
                int a = temp + st.top();
                st.push(temp);
                st.push(a);
            }
            else{
                st.push(stoi(ch));
            }
        }

        int sum = 0;
        while(!st.empty())
        {
            int ch = st.top();
            st.pop();
            cout<<ch<<endl;
            sum = sum + ch;
        }
        return sum;
    }
};