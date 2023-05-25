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
      ListNode *reverseList(ListNode *head)
      {

          ListNode *prvptr = NULL;
          ListNode *currptr = head;
          ListNode *nextptr;

          while (currptr != NULL)
          {
              nextptr = currptr->next;
              currptr->next = prvptr;

              prvptr = currptr;
              currptr = nextptr;
          }
          return prvptr;
      }
  };

  int main()
  {

      return 0;
  }