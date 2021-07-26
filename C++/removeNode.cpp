#include <iostream>

class Solution
{
    private:
     struct ListNode 
     {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n)
        {
            if(head == NULL)
            {
                return head;
            }
            if(head -> next == NULL)
            {
                return NULL;
            }

            //traversing til the end while increasing count that will be used as a pointer
            int count = 0;
            ListNode* temp = head;
            while (temp)
            {
                count++;
                temp = temp -> next;
            }

            //if the end node is the node that wants to be deleted
            if (count == n )
            {
                head = head -> next;
                delete (temp);
                return head;
            }
        }
};