// Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>

int main()
{
    int num1, num2, sum;
    
     printf("enter your first number:\n");
     scanf("%d", &num1);
     
     printf("enter your second number:\n");
     scanf("%d", &num2);
      
     sum = num1 + num2;
     
     printf("sum=%d\n", sum);
     
     return 0;
}
