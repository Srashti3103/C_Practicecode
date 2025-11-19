#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("Enter the valie of n : ");
    scanf("%d", &n);
    char curr[1000] = "1"; //curr will stores the present term 
    char temp[1000]; // temp will store the next term          
    for(int term = 1; term < n; term++) 
    {   int i = 0;   
        int j = 0;   
        while(curr[i] != '\0') {
            int count = 1;   // count digit repeats
             // Count continuous repeating digits
            while(curr[i] == curr[i + 1]) {
                count++;
                i++;
            }
             temp[j++] = count + '0';// Store the count
            temp[j++] = curr[i];// Store the digit itself 
             i++; 
        }
        temp[j] = '\0';        
        strcpy(curr, temp);  // copy temp into current
    }
     // Print final nth term
    printf("Result: %s", curr);
    return 0;
}
