#include <stdio.h>

float area_of_circle(float radius) {
    return 3.14 * radius * radius;
}

int main() {
    float radius, area;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // Function call
    area = area_of_circle(radius);

    printf("Area of circle = %.2f\n", area);

    return 0;
}
