#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy=new ListNode(NULL);
        ListNode *ptr=dummy;
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val<list2->val)
            {
                ptr->next=list1;
                list1=list1->next;
            }
            else
             {
                 ptr->next=list2;
                 list2=list2->next;
             }
             ptr=ptr->next;
        }
        while(list1!=NULL)
        {
            ptr->next=list1;
            list1=list1->next;
             ptr=ptr->next;
        }
         while(list2!=NULL)
        {
            ptr->next=list2;
            list2=list2->next;
            ptr=ptr->next;
        }
          ptr->next=NULL;
        return dummy->next;

    }
};
int main() {
    
    return 0;
}