#include <stdio.h>

float area_of_circle(float radius) {
    return 3.14 * radius * radius;
}

float Perimeter_of_circle(float radius) {
    return 2 * 3.14 * radius;
}

int main() {
    float radius, area, perimeter;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    
    area = area_of_circle(radius);
    perimeter = Perimeter_of_circle(radius);

    printf("Area of circle = %.2f\n", area);
    printf("Perimeter of circle = %.2f\n", perimeter);

    return 0;
}
