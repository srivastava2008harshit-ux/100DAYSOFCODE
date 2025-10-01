// Q34: Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int num, i;
   printf("enter the number:");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not prime\n");
       
    }

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("Not prime\n");
            return 0;
        }
    }

    printf("Prime\n");
    return 0;
}

