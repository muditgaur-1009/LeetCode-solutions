#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int up_count = 0;
        int down_count = 0;
        int i = 1;

        if (arr.size() < 3)
            return false;
        
        // Count strictly upward steps count
        while (i < arr.size() && arr[i] > arr[i - 1]) {
            i++;
            up_count++;
        }

        // Count strictly downward steps count
        while (i < arr.size() && arr[i] < arr[i - 1]) {
            i++;
            down_count++;
        }

        // If addition of upward and downword steps is same as array size then it is mountain
        return (up_count && down_count && (up_count + down_count == arr.size() - 1));
    }
};

int main() {
    
    return 0;
}