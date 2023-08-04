#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        
        vector<vector<int>> newBoard = board;
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int neighborsSum = sumNeighbors(board, i, j, m, n);
                newBoard[i][j] = applyRules(board[i][j], neighborsSum);
            }
        }
        
        board = newBoard;
    }
    
private:
    int sumNeighbors(const vector<vector<int>>& grid, int x, int y, int m, int n) {
        int sum = 0;
        for (int i = max(0, x - 1); i <= min(x + 1, m - 1); i++) {
            for (int j = max(0, y - 1); j <= min(y + 1, n - 1); j++) {
                if (i != x || j != y) {
                    sum += grid[i][j];
                }
            }
        }
        return sum;
    }

    int applyRules(int currentValue, int sum) {
        if (currentValue == 1) {
            if (sum < 2 || sum > 3) {
                return 0;
            }
        } else {
            if (sum == 3) {
                return 1;
            }
        }
        return currentValue;
    }
};



int main() {
    
    return 0;
}