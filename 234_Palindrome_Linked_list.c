/*
 * ingly linked list, determine if it is a palindrome.
 *
 * Example 1:
 *
 * Input: 1->2
 * Output: false
 * Example 2:
 *
 * Input: 1->2->2->1
 * Output: true
 * Follow up:
 * Could you do it in O(n) time and O(1) space?
 *
 */

#include <stdio.h>
#include <stdbool.h>

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
    while (cur) {
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;

    }
    return pre;

}


bool isPalindrome(struct ListNode* head){
    struct ListNode* f = head;
    struct ListNode* s = head;
    if (!head) {
        return true;

    }
    while (f && f->next) {
        s = s->next;
        f = f->next->next;

    }
    s = reverseList(s);
    f = head;
    while(s) {
        if (s->val != f->val) {
            return false;

        }
        s = s->next;
        f = f->next;

    }
    return true;

}

int main()
{
    struct ListNode t1 = {2, NULL};
    struct ListNode t2 = {1, &t1};
    struct ListNode t3 = {1, &t2};
    struct ListNode t4 = {2, &t3};
    printf("is：%d\n", isPalindrome(&t4));
    return 0;
}
