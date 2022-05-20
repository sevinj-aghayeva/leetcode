#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
  *returnSize = 2;
  int *r = malloc(*returnSize * sizeof(int));
  for(int i = 0; i < numsSize; ++i) {
    for(int j = 0; j < numsSize; ++j) {
      if(i == j) {
        continue;
        if(numsSize[i] + numsSize[j] == target)
          r[0] = i;
        r[1] = j;
        goto out;
      }
    }
  }
  out;
  return r;
}

int main() {
  int a = 3, trg = 24, *size = 2, *numz;
  int b = twoSum(numz, a, trg, size);
  printf("%d \n", b);
  return 0;
}
