// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main()
{ 
    int num1, num2, sum , diff, product, quotient;
    
    
    printf("enter your first number:");
    scanf("%d", &num1);
    
    printf("enter your second number:");
    scanf("%d" , &num2);
    
    sum = num1+num2;
    diff = num1-num2;
    product = num1*num2;
    quotient = num1/num2;
    
    printf("%d, %d, %d, %d", sum, diff, product, quotient);
    
    return 0;
}
