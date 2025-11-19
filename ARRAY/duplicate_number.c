// Find duplicate number in array
#include<stdio.h>
int main()
{
    //intialize the size of array
    int n ;
    //input the size of array
    printf("Enter the size of an array :");
    scanf("%d",&n);
    //intialize the array
    int arr[n];
    printf("Enter the elements of an array ");
    for(int i=0; i<n; i++)
    {
        //input the element of array 
        scanf("%d",&arr[i]);
    }
    //find duplicate number
    for (int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            //if arr[i]==arr[j],then print Duplicate number 
            if(arr[i]==arr[j])
            {
                //print duplicate number 
                printf("Duplicate number is : %d\n",arr[i]);
                return 0;
            }
        }
    }
    //duplicate number is not found 
    printf(("No Duplicate found \n "));
    return 0;
}
