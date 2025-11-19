//Leader element in an array (A leader is an element that is grrreater than or equal to all the elements on its right)
#include <stdio.h>
int main() {
    //intialize size of array
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    //intialize an array
    int arr[n];
    //input element of array
    printf("Enter the element of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int leader= arr[n - 1];
    printf("Leaders in the array: ");
    printf("%d ", leader);  // Last element is always a leader

    // Traverse from second last to first
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= leader) {
            leader = arr[i];
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
