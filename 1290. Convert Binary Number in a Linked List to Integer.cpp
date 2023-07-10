#include<iostream>
#include<cmath>
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
    int getDecimalValue(ListNode* head) {
        int decimalValue = 0;
        int exponent = 0;

        // Traverse the linked list to find the last node and calculate the maximum exponent
        ListNode* current = head;
        while (current->next != nullptr) {
            current = current->next;
            exponent++;
        }

        // Calculate the decimal value by summing up the product of node values and corresponding powers of 2
        current = head;
        while (current != nullptr) {
            decimalValue += current->val * pow(2, exponent);
            current = current->next;
            exponent--;
        }

        return decimalValue;
    }
};

int main() {
    
    return 0;
}