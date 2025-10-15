//reverse an arrray in place
#include<stdio.h>
int main()
{
    int n;
    //size of array
    printf("Enter number of element :");
    scanf("%d",&n);
    int arr[n];
    //Input element of array
    printf("Enter elements :");
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);       
    }
    //print element in reverse
    printf("Reverse of array");
    for(int i=n-1; i>=0;i--){
        printf(" %d ",arr[i]);
    }

}