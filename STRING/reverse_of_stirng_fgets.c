// Reverse a string using fgets
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    //input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);
    //print reversed strimg
    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}
