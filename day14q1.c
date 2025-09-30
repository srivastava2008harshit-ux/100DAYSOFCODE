// Q27: Write a program to print the sum of the first n odd numbers.

#include  <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 2 * i - 1;      // Formula to get the i-th odd number
    }

    printf("%d\n", sum);

    return 0;
}

