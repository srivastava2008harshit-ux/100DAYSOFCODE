// Q36: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, hcf, temp;
    
   
  printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
   
    if (num2 > num1) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
  
           while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    
    hcf = num1;
    
    printf("HCF of the given numbers is: %d\n", hcf);
    
    return 0;
}

