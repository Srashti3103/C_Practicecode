// Subarray with given sum (Two pointer / Sliding window)
#include<stdio.h>
int main()
{
    int n;
    //input size of array
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    //input elements of array
    printf("Enter the element of array :");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int cursum =0;
    int k;
    //input the given sum 
    printf("Enter the given sum :");
    scanf("%d",&k);
    int start =0;
    for(int end=0; end<n; end++)
    {
        cursum +=arr[end];
        while(cursum > k && start < end)
        {
            cursum -=arr[start];
            start++;
        }
        if(cursum == k)
        {
            //print the subarray with given sum 
            printf("Subarray with given sum is :");
            for(int i=start; i<=end; i++)
            {
                printf("%d ",arr[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
