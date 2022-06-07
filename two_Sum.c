#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
  *returnSize = 2;
  int *r = malloc(*returnSize * sizeof(int));
  for (int i = 0; i < numsSize; ++i) {
    for (int j = i + 1; j < numsSize; ++j) {
      if (nums[i] + nums [j] == target) {
        r[0] = i;
        r[1] = j;
        goto out;
      }
    }
  } out:
  return r;
}
int main () {
  int arr[6] = {2, 4, 5, 6, 7, 11};
  int t = 12;
  int x;
  int *s = twoSum(arr, 5, t, &x);
  for (int i = 0; i < x; ++i) {
    printf("%d\n", s[i]);
  }
  return 0;
}
