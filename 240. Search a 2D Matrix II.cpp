#include<iostream>
using namespace std;

//Approach1:
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     bool binarySearch(const vector<int>& row, int target) {
//         int left = 0;
//         int right = row.size() - 1;

//         while (left <= right) {
//             int mid = left + (right - left) / 2;

//             if (row[mid] == target)
//                 return true;
//             else if (row[mid] < target)
//                 left = mid + 1;
//             else
//                 right = mid - 1;
//         }

//         return false;
//     }

//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int m = matrix.size();
//         if (m == 0 || matrix[0].size() == 0)
//             return false;

//         // Handle the case when the matrix has only a single row or a single column
//         int n = matrix[0].size();
//         if (m == 1) {
//             return binarySearch(matrix[0], target);
//         }
//         if (n == 1) {
//             for (const auto& row : matrix) {
//                 if (row[0] == target)
//                     return true;
//             }
//             return false;
//         }

//         // Step 1: Apply binary search on the first column
//         int rowStart = 0;
//         int rowEnd = m - 1;
//         while (rowStart <= rowEnd) {
//             int midRow = rowStart + (rowEnd - rowStart) / 2;

//             if (matrix[midRow][0] == target) {
//                 return true;
//             } else if (matrix[midRow][0] < target) {
//                 rowStart = midRow + 1;
//             } else {
//                 rowEnd = midRow - 1;
//             }
//         }

//         // Step 2: Perform binary search on all potential rows
//         for (int i = 0; i <= rowEnd; i++) {
//             if (binarySearch(matrix[i], target)) {
//                 return true;
//             }
//         }

//         return false;
//     }
// };



//optimized code BEATSSSS 70.86%

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool binarySearch(const vector<int>& row, int target) {
        int left = 0;
        int right = row.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (row[mid] == target)
                return true;
            else if (row[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if (m == 0 || matrix[0].size() == 0)
            return false;

        int n = matrix[0].size();

        // Start from the bottom-left corner of the matrix
        int row = m - 1;
        int col = 0;

        while (row >= 0 && col < n) {
            if (matrix[row][col] == target)
                return true;
            else if (matrix[row][col] > target)
                row--;
            else
                col++;
        }

        return false;
    }
};



int main() {
    
    return 0;
}