//Check if array is sorted and rotated
#include<stdio.h>
int main()
{
    //intialize cariables
    int n, i, count = 0;
    //input size of array
    printf("Enter number of elements :");
    scanf("%d",&n);
    //intialize array
    int arr[n];
    //input elements of array
    printf("Enter elements :");
    //loop for element of array
    for (i=0;i<n;i++){
        //input elements
        scanf("%d",&arr[i]);
    }
    //loop for checking sorted and rotated
    for(i=0;i<n;i++){
        //condition for checking rotation
        if(arr[i]>arr[(i+1)%n]){
            //increment count
            count++;
        }
    }
    //condition for checking sorted and rotated
    if(count<=1){
        //print sorted and rotated array
        printf("Array is sorted and rotated\n");
    }
    //else if count greater than 1
    else{
        //print not sorted and rotated array
        printf("Array is sorted and not rotated\n");
    }
    //return statement 
    return 0;
}