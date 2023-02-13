class Solution
{
public:
    bool canWinNim(int n)
    {
        int count = n;
        while (n == 0)
        {
            if (n % 4 != 0)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }
};