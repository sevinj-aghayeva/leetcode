#include <stdio.h>
#include <stdbool.h>

int str_len(char* str) {
    int count = 0;
    while(*str != '\0') {
        ++count;
        ++str;
    }
    return count;       
}

bool equal(char* hay, char* ned, int len) {
    for (int i = 0; i < len;  ++i) {
        if (hay[i] == '\0') {
            return false;
        }
        if (hay[i] != ned[i]) {
            return false;
        }
    }
    return true;
}

int strStr(char * haystack, char * needle) {
    int haystack_len = str_len(haystack);
    int needle_len = str_len(needle);
    if (needle_len == 0) {
        return 0;
    }
    for (int i = 0; i < haystack_len; ++i) {
        if (equal(&haystack[i], needle, needle_len)) {
            return i;
        }
    }
    return -1;
}

int main() {
    char* hay = "costly";
    char* nedd = "ly";
    int index = strStr(hay, nedd);
    printf("%d\n", index);
    return 0;
}
