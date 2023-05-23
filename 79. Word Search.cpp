#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool dfs(vector<vector<char>>& board,string word,int row,int col,vector<vector<bool>> &vis,int i){
        int n = board.size();
        int m = board[0].size();
        //if length of string becomes 0 then it means we have found our result so return true;
        if(!word.length())return true;
        //if the block in matrix is already visited or out of bound or char at that block is not first char of word
        if(row<0 or col<0 or row>=n or col>=m or vis[row][col] or board[row][col]!=word[0])return false;
        vis[row][col]=true;
        //passing every time shorter string
        string s = word.substr(1);
        //doing dfs in all the founr direction of a block of matrix.
        bool res = dfs(board,s,row-1,col,vis,i+1) || dfs(board,s,row,col+1,vis,i+1) || dfs(board,s,row+1,col,vis,i+1) ||dfs(board,s,row,col-1,vis,i+1);
        //backtracking so that we could use it for further search if word is not found there
        vis[row][col]=false;
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        bool ans = false;
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(dfs(board,word,i,j,vis,0))return true;
            }
        }
        return false;
    }
    
};

int main() {
    


    return 0;
}