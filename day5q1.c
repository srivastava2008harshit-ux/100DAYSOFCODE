//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simpleInterest, compoundInterest;

    // Input principal, rate, and time
    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3) {
        printf("Invalid input!\n");
        return 1;
    }

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    compoundInterest = principal * pow(1 + rate / 100, time) - principal;

    // Print results
    printf("Simple Interest=%.0lf, Compound Interest=%.2lf\n", simpleInterest, compoundInterest);

    return 0;
}

