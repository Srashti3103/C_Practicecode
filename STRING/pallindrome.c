//check string is pallindrome or not 
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len, flag = 0;
    //enter the strimg
    printf("Enter a string: ");
    gets(str); // unsafe, better use fgets()
    //length of string
    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1; 
            break;
        }
    }
    if (flag == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
    return 0;
}
