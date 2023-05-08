#include<iostream>
#include<vector>
#include <limits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int buy=INT_MAX;
      int sell=0;;
      if(prices.size() < 2) {
        return 0;
    }
      for(int i=0;i<prices.size();i++){
          if(prices[i]<buy){
              buy=prices[i];
            }
            else if(prices[i]-buy>sell){
                sell=prices[i]-buy;
            }
      }
      
       return sell;
    }
};

int main() {
    
    return 0;
}