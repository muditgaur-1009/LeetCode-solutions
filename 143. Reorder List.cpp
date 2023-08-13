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
    void reorderList(ListNode *head)
    {
        if (!head || !head->next)
        {
            return;
        }
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *l2 = reverseList(slow->next);
        slow->next = nullptr;
        ListNode *l1 = head;
        while (l2 && l1)
        {
            ListNode *temp = l1->next;
            ListNode *temp2 = l2->next;
            l1->next = l2;
            l2->next = temp;
            l1 = temp;
            l2 = temp2;
        }
    }

    ListNode *reverseList(ListNode *head)
    {
        if (!head || !head->next)
        {
            return head;
        }
        ListNode *reversed_list = reverseList(head->next); // head
        // (3) -> (4) -> (5)

        head->next->next = head;
        head->next = nullptr;
        return reversed_list;
    }
};

int main()
{

    return 0;
}