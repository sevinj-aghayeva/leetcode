#include <stdio.h>
#include <stdbool.h>


int searchInsert(int* nums, int numsSize, int target){
    int i = 0;
    for (i = 0; i < numsSize; ++i) {
        if (target == nums[i]) {
            return i;
        } 
        if (target < nums[i]) {
            return i;
        }
    }
    return numsSize;
}

int main() {
    int array[7] = {1, 3, 4, 5, 6, 7, 9};
    int key = 10;
    printf("%d\n", searchInsert(array, 7, key));
    return 0;
}
