#include <stdio.h>
#include <stdlib.h>

int mySqrt(int x) {
    int low = 0, high = x, mid;
    while (low < high) {
        mid = (low + (high - low) / 2);
        if (mid == x / mid) { 
            return mid;
        }
        if (mid < x / mid) {
            low = mid + 1;
        } else { 
            high = mid - 1; 
        }
    }
    return high; 
}
int main() {
    int number = 100;
    printf("%d\n", mySqrt(number));
}