#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stack[10000];
int top = 0;

bool stack_empty(void) {
  if (top == 0) {
    return true;
  }
  return false;
}

void stack_new(void) {
  top = 0;
}

int stack_top(void) {
  if (top == 0) {
    return -1;
  }
  return stack[top-1];
}

void stack_push(int x) {
  stack[top] = x;
  ++top;
}

int stack_pop(void) {
  if (top != 0) {
    --top;
    return stack[top];
  }
  return -1;
}
bool is_valid(char* s) {
    stack_new();
    for ( ; *s != '\0'; ++s) {
        if (*s == '(' || *s == '{' || *s == '[') {
            stack_push(*s);
        } else if (!stack_empty()) {
            int x = stack_pop(); 
            if (!((x == '(' && *s == ')') || 
                  (x == '{' && *s == '}') || 
                  (x == '[' && *s == ']'))) {
                return false;
            }
        } else {
            return false;
        }
    }
    if (!stack_empty()) {
        return false;
    }
    return true;
}

int main () {
  stack_new();
  char* p = "({{}})]]]]";
  printf("%d\n", is_valid(p));
  return 0;
}
