//Move all negative number to the beginning and positive to the end
#include <stdio.h>
int main(){
    int n,i,j=0;
    //size of array
    printf("Enter the number of element :");
    scanf("%d",&n);
    int arr[n];
    //input value element
    printf("Enter the elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]<0){
            if(i!=0){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                j++;
            }
        }
    }
    //print the rearranged aray 
    printf("Rearranged array :");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}