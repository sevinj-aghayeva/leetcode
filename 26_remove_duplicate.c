#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    int i = 0;
    for (int j = 1; j < numsSize; ++j) {
        if (nums[j] != nums[i]) {
            ++i;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

int main() {
    int array[] = {1, 2, 3, 3, 4, 5, 5, 5, 5};
    printf("%d\n", removeDuplicates(array, 9));
    return 0;
}