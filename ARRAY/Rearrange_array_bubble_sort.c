//move all negative elements in the beginning and positive to the end using bubble sort
#include<stdio.h>
int main(){
    int n,i,j;
    //size of array
    printf("Enter the number of element :");
    scanf("%d",&n);
    int arr[n];
    //input value element
    printf("Enter the elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
        for(i=0;i<n-1;i++){
            for(j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1]; 
                    arr[j+1]=temp;              
                }
            }
        }
        //print the rearranged array
        printf("Rearranged array :");
        for(i=0;i<n;i++){
            printf("%d",arr[i]);
        }
        return 0;
   }