// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main()
{
    float celcius , fahrenheit;
    
    printf("enter temprature in celcius:");
    scanf("%f", &celcius);
    
    fahrenheit = (celcius * 9/5) + 32;
    
    printf("%.2f", fahrenheit);
    
    return 0;
}
