// Q49: Write a program to print the following pattern:

#include<stdio.h>
int main() {
    int n;
    printf("enter number :");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        for (int j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
