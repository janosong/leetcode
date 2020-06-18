#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;

};


struct ListNode* reverseList(struct ListNode* head){

    struct ListNode* cur = head;
    struct ListNode* pre = NULL;
    struct ListNode* next = NULL;

    if (NULL == head) {
        return head;

    }
    next = cur->next;

    while (cur) {
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;

    }
    return pre;

}

int main()
{
    return 0;
}
