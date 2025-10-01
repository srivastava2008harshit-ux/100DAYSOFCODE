// Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digit, sum = 0, d = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Count the number of digits
    while (temp != 0) {
        temp /= 10;
        d++;
    }

    temp = n;

    // Calculate sum of digits raised to the power d
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, d);
        temp /= 10;
    }

    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
