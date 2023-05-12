#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {
        unordered_map<char, int> count;
        for (int i = 0; i < text.length(); i++)
        {
            count[text[i]]++;
        }
        int ans = min({count['b'], count['a'], count['l'] / 2, count['o'] / 2, count['n']});
        return ans;
    }
};

int main()
{

    return 0;
}