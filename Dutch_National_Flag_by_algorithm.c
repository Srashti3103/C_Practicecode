//Program to Sort an array of 0s,1s and 2s(Dutch National Flag) using Dutch National Flag Algorithm
#include<stdio.h>
int main(){
	//Intialize size of array
	int num;
	printf("Enter the size of array: ");
	scanf("%d",&num);
    //Intialize array
	int arr[num];
	printf("Enter the elements of array only 0,1 & 2:\n");
	for(int i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}  
	for(int i=0;i<num;i++){
		if(arr[i]!=1 && arr[i]!=2 && arr[i]!=0){
			printf("Invalid Array! Only enter 0,1 & 2");
			return 0;//Exit the invalid array
		}
	}
	int low=0,mid=0,high=num-1;//intialize identifier
	int temp;
	//Dutch National Flag Algorithm
	while(mid<=high){
		if (arr[mid] == 0){
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }else if (arr[mid] == 1){
            mid++;
        }else{
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
	}
	//print the sorted array
	printf("Sorted array:\n");
	for(int i=0;i<num;i++){
		printf("%d ",arr[i]);
	}
}