//
// Created by Марк Калюжин on 14.11.2024.
//


#include "medium.h"

ListNode *removeNthFromEnd(ListNode *head, int n) {
    ListNode *cur = head;
    ListNode *prev = cur;
    int i = 1;
    while (cur->next != nullptr) {
        if (i >= n - 1) {
            prev = cur;
            i = 1;
        }
        ++i;
        cur = cur->next;
    }
    if (prev == cur) {
        return nullptr;
    }
    prev->next = prev->next == nullptr ? nullptr : prev->next->next;
    return head;
}