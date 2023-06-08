#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> res;
        for(int i = sqrt(area);i >= 1;i--){
            if(area % i == 0){
                res = {area/i,i};
                break;
            }
        }
        return res;
    }
};

int main() {
    
    return 0;
}