// Q57: Find the sum of array elements.

#include <stdio.h>

int main() {
    int n;
    
    printf("enter your number:");
    scanf("%d", &n); 
    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
        sum += arr[i];         
    }

    printf("%d\n", sum); 
    return 0;
}

