#include <stdio.h>
#include <stdlib.h>

struct ListNode { 
    int val;
    struct node* next;
};
struct ListNode mergeTwoLists(struct node* l1, struct node* l2) {
    if (l1 == NULL) {
        return l2;
    }
    if (l2 == NULL) {
        return l1;
    }
    struct ListNode* head;
    struct ListNode* tail;
    if (l1->val < l2->val) {
        head = tail = l1;
        l1 = l1->next;
    } else {
        head = tail = l2;
        l2 = l2->next;
    }
    while (l1 != NULL && l2 != NULL) {
        if (l1->val < l2->val) {
            tail->next = l1;
            tail = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            tail = l2;
            l2 = l2->next;
        }
    }
    if (l1 != NULL) {
        tail->next = l1;
    } else {
        tail->next = l2;
        }
    return head;
}
struct ListNode list_add(struct ListNode* list, int n) {
    struct ListNode* new = malloc(sizeof(struct ListNode));
    new->val = n;
    new->next = list;
    return new;
}

struct ListNode list_print(struct ListNode* list) {
    while (list != NULL) {
        printf("%d", list->val);
        list = list->next;
    }
    printf("\n");
}

int main () {
    struct node* p1 = NULL;
    struct node* p2 = NULL;
    list_add(p1, 6);
    list_add(p1, 4);
    list_add(p1, 2);
    list_add(p2, 7);
    list_add(p2, 3);
    list_add(p2, 1);
    struct ListNode* s = mergeTwoLists(p1, p2);
    list_print(s);
    printf("%d ", s);
    return 0;
}