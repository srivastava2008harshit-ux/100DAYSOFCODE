// Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main()
 {
    int number, digit;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;               // Get last digit
        if (digit % 2 != 0) {                  // If digit is odd
            product = product * digit;
        }
        number = number / 10;                           // Remove last digit
    }

    printf("Product of odd digits: %d\n", product);
    return 0;
}

