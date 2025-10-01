// Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main()
{   
    printf("program to find LCM of two numbers.\n\n");
    
    int n1, n2;
    int i = 1;
    
    printf("enter first number : ");
    scanf("%d" , &n1);
    
    printf("enter second number : ");
    scanf("%d" , &n2);
    
    while (i <= n1 * n2)
    {
       if (i % n1 == 0&& i % n2 == 0)
       {
         printf("%d is LCM of %d and %d\n" , i, n1 ,n2);
         break;
         }
         i++;
         }
         return 0;
         }
         

