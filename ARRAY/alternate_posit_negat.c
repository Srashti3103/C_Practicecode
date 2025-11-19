// Rearrange array in alternating positive & negative items
#include<stdio.h>
int main()
{
    //intialize size of array 
    int n;
    //input ssize of array
    printf("Enter the size of array:");
    scanf("%d",&n);
    //intialize array
    int arr[n];
    //input element of array
    printf("Enter  elements of array :\n");
    //loop for arranging element of array
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //intialize array and starting index number
    int pos[n],neg[n];
    int p=0,q=0;
    //separate positive element and negative element in separate array
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            pos[p++]=arr[i];
        }
        else{
            neg[q++]=arr[i];
        }
    }
    int i=0,j=0,k=0;
    //rearrange alternate positve and negative
    while(i<p && j<q){
        arr[k++]=pos[i++];
        arr[k++]=neg[j++];
    }
    //add remaining positive element 
    while(i<p){
        arr[k++]=pos[i++];
    }
    //add remaining negative element
    while(j<q){
        arr[k++]=neg[j++];
    }
    //primt alternate array
    printf("Rearranged array : \n");
    for(int s=0;s<n;s++){
        printf("%d\n",arr[s]);
    }    
}