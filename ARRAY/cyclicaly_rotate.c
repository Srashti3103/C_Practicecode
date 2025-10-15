//cyclically_rotate_an_array_by_one
#include<stdio.h>
int main()
{
    //intialize array and variables
    int a[10],i,n,temp;
    //input size and element of array
    printf("Enter an array size:");
    //input element of array 
    scanf("%d",&n);
    printf("Enter the elements of array :");
    //store element of array 
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //rotate array by one
    temp=a[n-1];
    //shift element of array by one to right
    for(i=n-1;i>0;i--){
        a[i]=a[i-1];
    }
    //place last element at first position
    a[0]=temp;
    //print rotated array
    printf("Array after rotation:");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}