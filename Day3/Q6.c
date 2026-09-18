// Write a program to swap two numbers with a third variable
#include <stdio.h>

int main() {
    int a, b , temp;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore Swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    temp = a;   
    a = b;   
    b = temp;   

    printf("\nAfter Swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    return 0;
}

