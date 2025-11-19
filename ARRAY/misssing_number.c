//missing number in an array [1 to n]
#include<stdio.h>
int main ()
{
    //intialize size of array 
    int n;
    printf("Enter the size of an array :");
    //input the size of array
    scanf("%d",&n);
    //intialize the array
    int arr[n];
    printf("Enter the elements of an array :");
    for (int i=0; i<n-1; i++)
    {
        //input elements of an array 
         scanf("%d",&arr[i]);
    }
    int sum =0;
    //calculate the summition of array
    for(int i=0; i<n-1; i++)
    {
        sum +=arr[i];
    }
    int expectsum , missingelement;
    //calculate expected sum of array 
    expectsum = n*(n+1)/2;
    //find missing element of an array
    missingelement=expectsum - sum;
    //print th emissing element of an array 
    printf("missing element is %d\n",missingelement);
    return 0;
}
