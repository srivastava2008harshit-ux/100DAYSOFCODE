// Q55: Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i, j, isPrime;
    
    printf("enter your number:");
    scanf("%d", &n);

    
    for (i = 2; i <= n; i++) {
        isPrime = 1; 
        
       
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

       
        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}

