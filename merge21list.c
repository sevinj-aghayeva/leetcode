#include <stdio.h>
#include <stdlib.h>

struct ListNode {
  int val;
  struct ListNode* next;
};

struct ListNode* list_add(struct ListNode* list, int num) {
  struct ListNode* p = malloc(sizeof (struct ListNode));
  p->val = num;
  p->next = list;
  return p;
}

void list_print(struct ListNode* list) {
  while (list != NULL) {
    printf("%d ", list->val);
    list = list->next;
  }
  printf("\n");
}
    
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
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

int main() {
  struct ListNode* list1 = NULL;
  struct ListNode* list2 = NULL;
  list1 = list_add(list1, 4);
  list1 = list_add(list1, 2);
  list1 = list_add(list1, 1);
  list2 = list_add(list2, 5);
  list2 = list_add(list2, 3);
  list2 = list_add(list2, 1);
  list_print(list1);
  list_print(list2);
  list_print(mergeTwoLists(list1, list2));
  return 0;
}
