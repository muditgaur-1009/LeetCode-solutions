#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
         if(head==NULL)
            return head;
         ListNode* dummy1 = head;
         ListNode* dummy2 = head->next;

         while(dummy1 != NULL && dummy2 != NULL)
         {
             if(dummy1->val == dummy2->val)
             {
                while((dummy1!=NULL && dummy2!=NULL) 
                               && (dummy2->val == dummy1->val))
                  {
                      dummy2=dummy2->next;
                  }
                  dummy1->next = dummy2;
             }
             else
             {
                 dummy1 = dummy2;
                 dummy2= dummy2->next;
             }    
         }

         return head;
    }
};

int main() {
    
    return 0;
}