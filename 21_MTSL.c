#include <stdio.h>
#include <string.h>

/**
   * Definition for singly-linked list.
   * struct ListNode {
   *     int val;
   *     struct ListNode *next;
   * };
*/

struct ListNode {
     int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){

    if (NULL == l1 || NULL == l2)
    {
        if (NULL == l2)
            return l1;
        return l2;
    }
    struct ListNode L = {0, NULL};
    struct ListNode *l = &L;
    while (l)
    {
        if (l1->val > l2->val)
        {
            l->next = l2;
            l2 = l2->next;
            if (NULL == l2)
            {
                l = l->next;
                l->next = l1;
                break;
            }
        }
        else
        {
            l->next = l1;
            l1= l1->next;
            if (NULL == l1)
            {
                l = l->next;
                l->next = l2;
                break;
            }

        }
        l = l->next;
    }

    return L.next;
}

#define DNODE(x, v, n) struct ListNode x = {v, n};
int main(int argc, char** argv)
{
    if (argc > 1)
        printf("argc:%d: %s\n",argc, argv[1]);

    //struct ListNode a3 = {1, NULL};
    //struct ListNode a2 = {1, &a2};
    //struct ListNode a1 = {1, &a2};
    DNODE(a3, 4, NULL);
    DNODE(a2, 2, &a3);
    DNODE(a1, 1, &a2);

    DNODE(b3, 4, NULL);
    DNODE(b2, 3, &b3);
    DNODE(b1, 1, &b2);

    struct ListNode *L = mergeTwoLists(&a1, &b1);
    while (L)
    {
        printf("%d->", L->val);
        L = L->next;
    }
    printf("\n");
    return 0;
}
