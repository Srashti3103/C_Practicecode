//Find all pairs with a given sum (by brute force method )
#include<stdio.h>
int main ()
{
    int n;
    //input size of array 
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    //input elements of array 
    printf("Enter the elements of array:");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int givensum ;
    //input the given sum 
    printf("Enter the given sum :");
    scanf("%d",&givensum);
    for(int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++){
            if (arr[i] + arr[j] == givensum)
            {
                //print the pairs whose sum is given 
                printf("pair is : %d %d \n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}