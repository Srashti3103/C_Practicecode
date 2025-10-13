//move all negative element to the beginning and  positive to the end using temp array
#include<stdio.h>
int main(){
    int n,i,j=0;
    //size of array
    printf("Enter the number of element :");
    scanf("%d",&n);
    int arr[n],temp[n];
    //input value element
    printf("Enter the elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        temp[i]=arr[i];
    }
    for(i=0;i<n;i++){
        if(temp[i]<0){
            arr[j]=temp[i];
            j++;
        }
    }
    for(i=0;i<n;i++){
        if(temp[i]>=0){
            arr[j]=temp[i];
            j++;
        }
    }
    //print the rearranged array
    printf("Rearranged array :");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}