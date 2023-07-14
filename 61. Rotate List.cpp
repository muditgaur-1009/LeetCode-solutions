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
    ListNode* rotateRight(ListNode* head, int k) {
        // Check for empty list or k = 0
        if (head == NULL || k == 0) {
            return head;
        }
        
        int length = 1;
        ListNode* tail = head;
        
        // Find the length of the list and locate the tail node
        while (tail->next != NULL) {
            tail = tail->next;
            length++;
        }
        
        // Adjust k if it's larger than the length of the list
        k = k % length;
        
        if (k == 0) {
            return head;  // No rotation needed
        }
        
        ListNode* newTail = head;
        
        // Move newTail k positions ahead of head
        for (int i = 0; i < length - k - 1; i++) {
            newTail = newTail->next;
        }
        
        // Update the pointers to rotate the list
        ListNode* newHead = newTail->next;
        newTail->next = NULL;
        tail->next = head;
        
        return newHead;
    }
};



int main() {
    
    return 0;
}