// Find the maximum and minimum element in an array
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<5; i++)
    {
       if(arr[i]>max)
       {
        max=arr[i];
       }
       else if(arr[i]<min)
       {
        min=arr[i];
       }
    }
    printf("Max element :  %d\n",max);//max element in array
    printf("Min element :  %d\n",min);//min element in array
}