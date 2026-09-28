//WAP to swap the first and last digit on a number
#include <stdio.h>

int main() {
    int num, swapped, digitsMultiplier = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    int lastDigit = num % 10;
    int firstDigit = num;

    while (firstDigit >= 10) {
        firstDigit /= 10;
        digitsMultiplier *= 10;
    }

    swapped = (lastDigit * digitsMultiplier) + (num % digitsMultiplier);
    swapped = (swapped - lastDigit) + firstDigit;

    printf("Swapped: %d\n", swapped);
    return 0;
}
