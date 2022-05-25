#include <stdio.h>                                                                                                                     
#include <stdlib.h>                                                                                                                    
#include <stdbool.h>                                                                                                                   
                                                                                                                                       
long long reverse(int num) {                                                                                                           
  int remainder;                                                                                                                       
  long long result = 0;                                                                                                                
  while(num != 0) {                                                                                                                    
    remainder = num % 10;                                                                                                              
    result = (result * 10) + remainder;                                                                                                
    num /= 10;                                                                                                                         
  }                                                                                                                                    
  return result;                                                                                                                       
}                                                                                                                                      
                                                                                                                                       
bool isPalindrome(int x) {                                                                                                             
  if (x < 0) {                                                                                                                         
    return false;                                                                                                                      
  }                                                                                                                                    
  return x == reverse(x);                                                                                                              
}                                                                                                                                      
                                                                                                                                       
int main () {                                                                                                                          
  int input;                                                                                                                           
  printf("Enter a number: ");                                                                                                          
  scanf("%d", &input);                                                                                                                 
  if (isPalindrome(input)) {                                                                                                           
    printf("It's a palindrome.\n");                                                                                                    
  } else {                                                                                                                             
    printf("It's not a palindrome.\n");                                                                                                
  }                                                                                                                                    
  return 0;                                                                                                                            
}
