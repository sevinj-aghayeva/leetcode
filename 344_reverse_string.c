#include <stdio.h>
#include <stdlib.h>

void reverseString(char* s, int sSize) {
    char* p = s;
    char* q = s;
    while (*p != '\0') {
        ++p;
    }
    --p;
    while (q < p) {
        int temp = *q;
        *q = *p; 
        *p = temp;
        --p;
        ++q;
    }
}

int main() {
    char test[6] = "hello";
    reverseString(test, 6);
    printf("%s\n", test);
    return 0;
}