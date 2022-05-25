#include <stdio.h>
#include <stdlib.h>

char* lcp(char** strs, int n) {
  int len = 0;
  while (strs[0][len]) {
    for (int i = 1; i < n; ++i) {
      if (strs[i][len] != strs[0][len]) {
        char *r = calloc(len + 1, 1);
        strncpy(r, strs[0], len);
        return r;
      }
    }
    ++len;
  }
  return strs[0];
}

char *longestCommonPrefix(char **strs, int strsSize) {
  chaeer prefix; 
  if(prefix == "") {
    return 
  }
  for(int i = 0; i < strSize; i++) {
    for(int j = 0; i < strSize; j++) {
      if(*strs[i][0] == 
  return 
int main() {
           char *words[];
           
