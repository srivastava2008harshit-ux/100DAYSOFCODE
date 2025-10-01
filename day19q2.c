// Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, sum = 0;

    
    printf("Enter a number: ");
    scanf("%d", &num);

   
    while (num > 0) {
        int digit = num % 10; 
        sum = sum + digit;    
                num = num / 10;      
    }

    // Print the sum of digits
    printf("Sum of digits = %d\n", sum);

    return 0;
}
                                                              
                                                
