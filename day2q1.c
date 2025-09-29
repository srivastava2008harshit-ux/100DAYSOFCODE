// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main()
{
    int length, breadth, area, perimeter;
    
    printf("Enter length of rectangle: ");
    scanf("%d", &length);
    
    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadth);
    
    perimeter = 2 * (length + breadth);
    area = length * breadth;
    
    printf("Area = %d, Perimeter = %d\n", area, perimeter);
    
    return 0;
}

