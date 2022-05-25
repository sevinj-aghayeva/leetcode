#include <stdio.h>

int removeElement(int*nums, int numsSize, int val) {
  int i = 0;
  for (int j = 0; j < numsSize; ++j) {
    if (nums[j] != val) {
      nums[j] = nums[i];
      ++i;
    }
  }
  return i;
}

int main() {
  int array[] = {2, 3, 6, 6, 6, 6, 7, 8};
  int value = 6;
  printf("%d\n", removeElement(array, 8, value));
  return 0;
}
