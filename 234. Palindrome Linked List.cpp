#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        
        string v = "";
        while (head != NULL)
        {
            v += (head->val + '0');
            head = head->next;
        }

        for (int i = 0; i < v.length() / 2; i++)
        {
            if (v[i] != v[v.length() - 1 - i])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{

    return 0;
}