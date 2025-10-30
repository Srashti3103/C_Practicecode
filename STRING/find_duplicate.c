// Remove duplicates from a string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j, k;
    printf("Enter a string: ");
    gets(str); // unsafe, use fgets() for safety
    //length of string
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; ) {
            if (str[i] == str[j]) {
                // Shift all characters to the left
                for (k = j; k < len; k++) {
                    str[k] = str[k + 1];
                }
                len--; // reduce length after removing duplicate
            } else {
                j++;
            }
        }
    }
// print the string after removing duplicate 
    printf("String after removing duplicates: %s\n", str);
    return 0;
}
