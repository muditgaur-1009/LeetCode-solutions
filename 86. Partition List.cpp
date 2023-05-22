#include<iostream>
using namespace std;


  struct ListNode {
      int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* new_dummy = new ListNode(0);
        ListNode* remaining_dummy = new ListNode(0);
        ListNode* new_tail = new_dummy;
        ListNode* remaining_tail = remaining_dummy;

        ListNode* current = head;
        while (current) {
            if (current->val < x) {
                new_tail->next = current;
                new_tail = new_tail->next;
            } else {
                remaining_tail->next = current;
                remaining_tail = remaining_tail->next;
            }

            current = current->next;
        }

        new_tail->next = remaining_dummy->next;
        remaining_tail->next = nullptr;

        return new_dummy->next;
    }
};


int main() {
    
    return 0;
}