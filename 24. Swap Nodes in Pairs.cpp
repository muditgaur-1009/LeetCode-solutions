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
    ListNode* swapPairs(ListNode* head) {
        // Base case: Length is 0 or 1, return the same head
        if (!head || !head->next) {
            return head;
        }
        
        // Recursive case
        ListNode* newHead = head->next;
        head->next = swapPairs(newHead->next);
        newHead->next = head;
        
        return newHead;
    }
};



int main() {
    
    return 0;
}