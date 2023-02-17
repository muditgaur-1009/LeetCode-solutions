#include <iostream>
#include <vector>
using namespace std;

class Solution
{

    private:
    bool numberdivide(int num){
        int n=num;
        while (n!=0)
        {
            int rem=n%10;
            if(rem==0|| num%rem!=0){
                return false;
                break;
            }
            n=n/10;

        }
        return true;
        
    }


public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> vect;
        for (int i = left; i <= right; i++)
        {
            if (numberdivide(i)==true)
            {
                vect.push_back(i);
            }
            
        }
        return vect;
    }
};

int main()
{

    return 0;
}