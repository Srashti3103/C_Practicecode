//convert string into integer
#include <stdio.h>
int main() {
    char str[50];
    int result = 0;
    int i = 0;
    printf("Enter number as string: ");
    scanf("%s",str);
    // Convert string to integer
    while (str[i]!='\0'){
        result=result*10+(str[i]-'0');
        i++;
    }
    printf("Converted integer = %d",result);
    return 0;
}
