// kth largest and smallest element
#include <stdio.h>

int main() {
    int m, k;

    // Input: size of array
    printf("Enter number of elements: ");
    scanf("%d", &m);

    int arr[m];  // ✅ Now 'm' is known, so this is valid

    // Input: elements of array
    printf("Enter elements:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: K value
    printf("Enter the value of K: ");
    scanf("%d", &k);

    // Check for valid K
    if (k <= 0 || k > m) {
        printf("Invalid value of K.\n");
        return 1;
    }

    // Sort the array (Bubble Sort)
    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Output kth smallest and largest elements
    printf("%dth smallest Element = %d\n", k, arr[k - 1]);
    printf("%dth largest  Element = %d\n", k, arr[m - k]);

    return 0;
}
