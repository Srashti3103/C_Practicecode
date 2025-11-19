// Count the number of occurrences of an element in an array 
#include<stdio.h>
int main ()
{
    int n;
    //input size of an array
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    //input elments of  array 
    printf("Enter elements of array : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int element ;
    //input the element for finding occureance 
    printf("Enter the elment of this array :");
    scanf("%d",&element);
    int count =0 ;
    //counting the number of occureance 
    for (int i =0; i<n; i++)
    {
        if(arr[i]==element)
        {
            count++;
        }
    }
    //print the element and its occureance
    printf("Element %d appears %d times in this array \n",element ,count);
    return 0;
}