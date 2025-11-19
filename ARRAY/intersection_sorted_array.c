// Find intersection of two sorted array
#include <stdio.h>

// Function declaration ----> finds and prints the intersection of two sorted arrays
void intersection(int first[], int second[], int n, int m);

int main()
{
    int n, m;    

    // Input for first array
    printf("Enter the size of first array: ");
    scanf("%d", &n);
    int first[n];   // Declare first array with size n
    printf("Enter the elements of first array (sorted): ");
    for (int i = 0; i < n; i++)
        scanf("%d", &first[i]);

    //Input for second array 
    printf("Enter the size of second array: ");
    scanf("%d", &m);
    int second[m];  // Declare second array with size m
    printf("Enter the elements of second array (sorted): ");
    for (int i = 0; i < m; i++)
        scanf("%d", &second[i]);

    //  Call the function to find and print intersection 
    printf("Intersection of the two arrays: ");
    intersection(first, second, n, m);

    return 0;
}

// Function definition
void intersection(int first[], int second[], int n, int m)
{
    int i = 0, j = 0; // Initialize two pointers for both arrays

    // Use the two-pointer technique since arrays are sorted
    while (i < n && j < m)
    {
        // If current element of first[] is smaller, move pointer i
        if (first[i] < second[j])
            i++;
        // If current element of second[] is smaller, move pointer j
        else if (second[j] < first[i])
            j++;
        // If elements are equal, it’s a common element → print it
        else
        {
            printf("%d ", first[i]);
            i++; // Move both pointers forward
            j++;
        }
    }

    // Print a new line at the end for clean output
    printf("\n");
}
