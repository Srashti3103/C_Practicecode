//kadane's algorithm - maxsum of subarray
#include <stdio.h>
int main() {
    //intialize size of array 
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    //intialize array
    int arr[n];
    //input elemen tof array 
    printf("Enter elements: ");
    //loop for element of array
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    //intialize currrent sum and max sum 
    int currentSum = 0, maxSum = arr[0];

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];
        //conditon for finding maxsum of subarray
        if (currentSum > maxSum)
            maxSum = currentSum;
            //sondition for negative element 
        if (currentSum < 0)
            currentSum = 0;
    }
    //print maxsum of subarray 
    printf("Maximum subarray sum is: %d\n", maxSum);
    return 0;
}