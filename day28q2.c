// Q56: Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int n, i;
    
    printf("enter your number:");
    scanf("%d", &n);  // Read the number of elements

    int arr[n];  // Declare array of size n

    // Read n elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array elements
    for(i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1)
            printf(" ");  // Print space between elements
    }

    return 0;
}

