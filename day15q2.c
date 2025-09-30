// Q30: Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int num;
    
    printf("enter the number:");
    scanf("%d", &num);

    if (num == 0) {
        printf("0\n");
    } else {
        while (num > 0) {
            printf("%d", num % 10);         // print last digit
            num = num / 10;                  // remove last digit
        }
        printf("\n");
    }

    return 0;
}

