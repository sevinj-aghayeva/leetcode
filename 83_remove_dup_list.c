#include <stdio.h>
#include <stdlib.h>

struct list_node {
  int val;
  struct list_node* next;
};

struct list_node* list_add(struct list_node* list, int num) {
  struct list_node* new = malloc(sizeof(struct list_node));
  new->val = num;
  new->next = list;
  return new;
}

struct list_node* a2l(int* a, int len) {
  struct list_node* p = NULL;
  for (int i = len-1; i >= 0; --i) {
    p = list_add(p, a[i]);
  }
  return p;
}

struct list_node* delete_duplicate(struct list_node* head) {
  if (head == NULL) {
    return NULL;
  }
  struct list_node* cur = head;
  struct list_node* next = cur->next;
  while (next != NULL) {
    if (cur-> val != next->val) {
      cur = next;
      next = cur->next;
    } else {
      cur->next = next->next;
      free(next);
      next = cur->next;
    }
  }
  return head;
}

void list_print(struct list_node* list) {
  while (list) {
    printf("%d ", list->val);
    list = list->next;
  }
  printf("\n");
}

int main() {
  int array[] = {1, 2, 2, 3, 4, 4, 6, 8};
  list_print(a2l(array, 8));
  list_print(delete_duplicate(a2l(array,8)));
  return 0;
}
