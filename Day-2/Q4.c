// Find area and circumference of a circle given its radius
#include <stdio.h>

int main() {
    float radius;
    float area, circumference;
    printf("Enter radius: ");
    scanf("%f", &radius);

    area = 3.14 * pow(radius, 2);
    circumference = 2 * 3.14 * radius;

    printf("Area of circle is: %f\n", area);
    printf("Circumference of circle is: %f", circumference);

    return 0;

}

