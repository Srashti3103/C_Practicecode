// Merge two sorted arrays without using extra space
#include<stdio.h>
void mergearray(int arr1[], int arr2[], int n, int m);
void sortarray(int arr[], int size);
void printarray(int arr[], int size);
int main()
{
    int n ,m;
    printf("Enter the size of arr1 :");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the elements of arr1 :");
    for(int i=0; i<n; i++)
    {KO
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of arr2 :");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter the elements of arr2 :");
    for(int i=0; i<m; i++)
    {
        scanf("%d",&arr2[i]);
    }
    mergearray(arr1,arr2,m,n);
    printf("After merging:\n");
    printf("arr1:");
    printarray(arr1, n);
    printf("arr2 :");
    printarray(arr2,m);
    return 0;
}
    void mergearray(int arr1[],int arr2[],int m , int n){
        int temp;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr2[i]<arr1[j])
            {
            temp = arr2[i];
            arr2[i]=arr1[j];
            arr1[j]=temp;
            sortarray(arr2,m);
            }
        }
    }
    }
    void sortarray(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printarray(int arr[], int n){
    for(int i=0; i<n ; i++)
{
    printf("%d",arr[i]);
}
printf("\n");
}