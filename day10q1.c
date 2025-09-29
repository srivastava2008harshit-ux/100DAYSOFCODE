// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    int a, b, c;

    // Input the sides of the triangle
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if the sides form a valid triangle first
    if (a + b > c && a + c > b && b + c > a) {
        // Check for Equilateral triangle
        if (a == b && b == c) {
            printf("Equilateral\n");
        }
        // Check for Isosceles triangle
        else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        }
        // Otherwise, it is Scalene
        else {
            printf("Scalene\n");
        }
    } else {
        printf("Not a valid triangle\n");
    }

    return 0;
}

