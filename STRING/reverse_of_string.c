//Reverse a string
#include <stdio.h>
#include <string.h> 
int main() {
    char str[100];
    int len, i;
    // Input string
    printf("Enter a string: ");
    //gets() is unsafe, use fgets() instead for safety
    gets(str); 
    // find length of string
    len = strlen(str); 
    //print reversed string
    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}
