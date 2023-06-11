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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        while(temp!=NULL && temp->val!=val){
            temp=temp->next;
        }
        if(head==NULL)
            return NULL;
        
        ListNode* todelete=head;
        while(todelete->next!=NULL){
            if(todelete->next->val==val){
                todelete->next=todelete->next->next;
            }
            else{
                todelete=todelete->next;
            }
        }
        if(head->val==val && head->next==NULL)
            return NULL;
        if(head->val==val && head->next!=NULL){
            head=head->next;
        }
        return head;
    }
};


int main() {
    
    return 0;
}