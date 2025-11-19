// Trapping Rain Water Problem
#include <stdio.h>

int main() {
    // Initialization
    // Array to store maximum height to the left of each bar
    int leftMax[6];
     // Input array representing bar heights
    int height[6] = {4, 2, 0, 3, 2, 5}; 
    // Array to store maximum height to the right of each bar
    int rightMax[6]; 
    // Variable to store total trapped water
    int water = 0;                  
    // leftMax for each index
    // The first element has no left side, so it's its own max
    leftMax[0] = height[0];         
    for (int i = 1; i < 6; i++) {
        if (height[i] > leftMax[i - 1]) {
            leftMax[i] = height[i]; 
        } else {
            leftMax[i] = leftMax[i - 1]; 
        }
    }

    // rightMax for each index
    // The last element has no right side, so it's its own max
    rightMax[5] = height[5];        
    for (int i = 4; i >= 0; i--) {  
        if (height[i] > rightMax[i + 1]) {
            rightMax[i] = height[i]; 
        } else {
            rightMax[i] = rightMax[i + 1]; 
        }
    }

    // trapped water at each index
    for (int i = 0; i < 6; i++) {
        int minHeight;

        // The water level is determined by the smaller of leftMax and rightMax
        if (leftMax[i] < rightMax[i]) {
            minHeight = leftMax[i];
        } else {
            minHeight = rightMax[i];
        }

        // Water trapped at position i = minHeight - height[i]
        water += (minHeight - height[i]);
    }

    // print total trapped water
    printf("%d", water);

    return 0;
}
