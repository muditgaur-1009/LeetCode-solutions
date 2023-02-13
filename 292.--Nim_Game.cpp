#include <iostream>
using namespace std;

class Solution
{
public:
    bool canWinNim(int n)
    {
        int count = n;
            if (n % 4 != 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        
    }
};

int main()
{

    return 0;
}