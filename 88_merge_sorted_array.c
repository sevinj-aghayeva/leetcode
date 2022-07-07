#include <stdio.h>
#include <stdlib.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
  if (m == 0) {
    for (int s = 0; s < n; ++n) {
      nums1[s] = nums2[s];
    }
    return;
  }
  int i = m - 1;
  int j = n - 1;
  int k = nums1Size - 1;
  while (j >= 0 && i >= 0) {
    if (nums1[i] >= nums2[j]) {
      nums1[k] = nums1[i];
      --k;
      --i;
    } else {
      nums1[k] = nums2[j];
      --k;
      --j;
    }
  }
  while (j >= 0) {
    nums1[k] = nums2[j];
    --k;
    --j;
  }
}

int main () {
  int arr1[7] = {1, 1, 2, 4, 0, 0, 0};
  int arr2[3] = {3, 6, 7};
  for (int i = 0; i < 7; ++i) {
    merge(arr1, 7, 4, arr2, 3, 3);
    printf("%d ", arr1[i]);
  }
  return 0;
}
