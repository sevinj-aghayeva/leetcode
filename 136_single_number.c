#include <stdio.h>
#include <stdlib.h>


int singleNumber(int* nums, int numsSize){
  int a[60001] = {0}, i = 0;
  for (i = 0; i < numsSize; ++i) {
    if (a[nums[i] + 30000] == 1) {
      a[nums[i] + 30000] = 0;
    } else {
      a[nums[i] + 30000] = 1;
    }
  }
  for (i = 0; i < 60001; ++i) {
    if (a[i] == 1) {
      i = i - 30000;
      break;
    }
  }
  return i;
}

int main() {
  int a[] = {4,4,46,1,1,5,5};
  printf("%d \n", singleNumber(a, 7));
  return 0;
}
