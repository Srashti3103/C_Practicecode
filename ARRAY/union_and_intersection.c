//find union and intersection of two array
#include<stdio.h>
int main()
{
    
    //intialize array and variables
    int a[10],b[10],u[20],i,j,k=0,l=0,m=0,n;
    //input size and element of array
    printf("Enter the size of first array:");
    scanf("%d",&n);
    //input element of array
    printf("Enter the elements of first array:");
    //store first array element in union array
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        u[k]=a[i];
        k++;
    }
    //input size and element of second array
    printf("Enter the size of second array:");
    scanf("%d",&n);
    //input element of array
    printf("Enter the elements of second array:");
    //check element of seecond array in first array
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
        int flag =0;
        //check element of second array in first array
        for(j=0;j<k;j++){
            //if element of second array is present in first array
            if(b[i]==a[j]){
                flag=1;
                break;
            }
        }
        //if element of second array is present in first array
        if(flag ==1){
            l++;
        }
        //if element of second array is not present in first array
        else{
            u[k]=b[i];
            k++;
}
    }
    //print union and inteersection of two array
    printf("Union of two array is:");
    for(i=0;i<k;i++){
        //print union of two array
        printf("%d\n",u[i]);
    }
    printf("\nIntersection of two array is :");
    for(i=0;i<l;i++){
        //print intersection of two array
        printf("%d\n",a[i]);
    }
    return 0;
}
