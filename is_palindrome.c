#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

long long reverse(int num) {
  long long result = 0, remainder;
  while (num > 0) {
    remainder = num % 10;
    result = result * 10 + remainder;
    num /= 10;
  }
  return result;
}
bool isPalindrome (int x) {
  if (x < 0) {
    return false;
  }
  return x == reverse(x);
}

int main () {
  int number = 121;
  printf("%d\n", isPalindrome(number));
  return 0;
}

  
