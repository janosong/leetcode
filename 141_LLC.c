/**
 *  * Definition for singly-linked list.
 *   * struct ListNode {
 *    *     int val;
 *     *     struct ListNode *next;
 *      * };
 *       */
bool hasCycle(struct ListNode *head) {
    if (!head)
        return false;
    struct ListNode *f = head->next;
    struct ListNode *s = head;
    while(f && f->next) {
        if (f == s) {
            return true;

        }
        s = s->next;
        f = f->next->next;

    }
    return false;

}
*   }
