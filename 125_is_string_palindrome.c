#include <ctype.h> 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool isPalindrome(char * s) {
    int i = 0;
    for (int j = 0; s[j] != '\0'; ++j) {
        if (isalnum(s[j])) {
            s[i]= tolower(s[j]);
            ++i;
        }
    }
    --i; 
    int low = 0, high = i;
    while (low < high) {
        if (s[low] != s[high]) {
           return false;
        }
        ++low;
        --high;
    }
    return true;
}

int main () {
    char str[] = "ollo";
    printf("%d\n", isPalindrome(str));
    return 0;
}
