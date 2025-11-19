//check if two string are anagram or not 
#include<stdio.h>
#include<string.h>
int main()
{
    //intialization of strings
    char str1[100],str2[100];
    //Input the first string
    printf("Enter first string: ");
    scanf("%s",str1);
    //Input the second string
    printf("Enter second string: ");
    scanf("%s",str2);
    //check the length of string are same or not 
    if(strlen(str1)!=strlen(str2))
    {
        //if not then it is not an anagram 
        printf("Not an anagram");
        return 0;
    }
    //sorting of strings
     for (int i = 0; i < strlen(str1) - 1; i++) {
        for (int j = i + 1; j < strlen(str1); j++) {
            if (str1[i] > str1[j]) 
            {
                char temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
            if (str2[i] > str2[j]) 
            {
                char temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }
    //if both string are same then it is a anagram else not 
    if(str1[100] = str2[100])
    {
        printf("strings are anagrams ");
    }
    else
    {
        printf("strings are not anagram");
    }
    return 0;
}