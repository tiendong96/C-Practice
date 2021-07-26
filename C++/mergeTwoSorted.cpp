#include <iostream>

//Limitation from Leetcode says that the list passed through must be NON-DECREASING
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
        ListNode* mergedTwoSorted(ListNode* l1, ListNode* l2)
        {
            ListNode* newList = NULL;

            //if both ListNodes are empty
           if (l1 == NULL && l2 == NULL)
           {
               return NULL;
           }
           else if (l1 == l2)
           {
               return l1;
            //if l1 has values but l2 is empty
           }
           else if (l1 != NULL && l2 == NULL)
           {
               return l1;
            //if l2 has values but l1 is empty
           }
           else if (l1 == NULL && l2 != NULL)
           {
               return l2;
           }else
           {
               // ex. 1,2,4 & 1,3,4 
               // is the first node in l1 less than first node in l2? l2 first node will be next to l1 first node, l2 next node will be l1 previous next node 
                if (l1->val <= l2->val)
                {
                    newList = l1;
                    newList -> next = mergedTwoSorted(l1->next, l2);
                }else
                {
                    newList = l2;
                    newList -> next = mergedTwoSorted(l1, l2->next);
                }
           }
           return newList;
        }
};