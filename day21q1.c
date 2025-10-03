// Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, first, last, digits = 0, temp, swapped, multiplier = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;

    // Find first digit and multiplier for first digit place
    while (temp >= 10) {
        temp /= 10;
        multiplier *= 10;
    }
    first = temp;

    // Swap first and last digits
    swapped = last * multiplier + (num % multiplier / 10) * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}

