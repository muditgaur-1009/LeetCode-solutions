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
    ListNode *middleNode(ListNode *head)
    {
        int count = 0;
        ListNode *current = head;

        while (current != nullptr)
        {
            count++;
            current = current->next;
        }

        int middle = count / 2 + 1;
        current = head;
        for (int i = 1; i < middle; i++)
        {
            current = current->next;
        }

        return current;
    }
};

int main()
{

    return 0;
}