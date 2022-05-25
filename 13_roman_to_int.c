#include <stdio.h>
#include <stdlib.h>
#include <assert.h> 

int r2c(char r) {
  if(r == 'I') {
    return 1;
  }
  if(r == 'V') {
    return 5;
  }
  if(r == 'X') {
    return 10;
  }
  if(r == 'L') {
    return 50;
  }
  if(r == 'C') {
    return 100;
  }
  if(r == 'D') {
    return 500;
  }
  assert (r == 'M');
  return 1000;
}

int romanToInt (char *s) {
  char *p = s;
  int n = 0;
  for( ; *s != '\0'; s++) {
    n += r2c(*s);
    if(s > p && *s == 'V' && *(s-1) == 'I') {
      n -= 2;
      }
    if(s > p && *s == 'X' && *(s-1) == 'I') {
      n -= 2;
    }
    if(s > p && *s == 'L' && *(s-1) == 'X') {
      n -= 20;
    }
    if(s > p && *s == 'C' && *(s-1) == 'X') {
      n -= 20;
    }
    if(s > p && *s == 'D' && *(s-1) == 'C') {
      n -= 200;
    }
    if(s > p && *s == 'M' && *(s-1) == 'C') {
      n -= 200;
    }
  }
  return n;
}

int main() {
  char str[10];  
  printf("User enter roman number as a charachter (ex: X, I, V, C, L, D) to convert it to decimal: ");
  scanf("%9s", str);
  printf("%d \n", romanToInt(str));
  return 0;
}
  
