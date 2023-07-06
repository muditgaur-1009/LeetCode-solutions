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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *n3 = nullptr;
        ListNode **n3ptr = &n3;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0)
        {
            int sum = carry;

            if (l1 != nullptr)
            {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr)
            {
                sum += l2->val;
                l2 = l2->next;
            }

            *n3ptr = new ListNode(sum % 10);
            n3ptr = &((*n3ptr)->next);
            carry = sum / 10;
        }

        return n3;
    }
};

int main()
{

    return 0;
}