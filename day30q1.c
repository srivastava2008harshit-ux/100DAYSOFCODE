// Q59: Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    int n, i;
    int even = 0, odd = 0;

   printf("enter the elements:");
    scanf("%d", &n);

    int arr[n];

    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Output result
    printf("Even=%d, Odd=%d\n", even, odd);

    return 0;
}

