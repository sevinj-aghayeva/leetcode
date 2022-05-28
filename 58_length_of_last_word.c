#include <stdio.h>
#include <stdlib.h>

int lengthOfLastWord(char* s) {
    char* p = s;
    while (*p != '\0') {
        ++p;
    }
    --p; 
    while (p >= s && *p == ' ') {
        --p;
    }
    int count = 0;
    while (p >= s && *p != ' ') {
        ++count;
        --p;
    }
    return count; 
}

int main() {
    char input [] = "   good morning  sun  "; 
    int len = lengthOfLastWord(input);
    printf("%d\n", len);
    return 0;
}