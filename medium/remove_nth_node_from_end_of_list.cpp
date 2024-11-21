//
// Created by Марк Калюжин on 14.11.2024.
//


#include "medium.h"

ListNode *removeNthFromEnd(ListNode *head, int n) {
    ListNode *dummy = new ListNode(NULL, head);
    ListNode *cur = head;
    ListNode *prev = dummy;
    for (size_t i = 0; i != n; ++i) {
        cur = cur->next;
    }
    while (cur != nullptr) {
        cur = cur->next;
        prev = prev->next;
    }
    prev->next = prev->next->next;
    return dummy->next;
}