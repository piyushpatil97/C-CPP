#include <stdio.h>

float areaV(float r) {
    return 3.14 * r * r;
}
void areaR(float r, float *result) {
    *result = 3.14 * r * r;
}
float perimeterV(float r) {
    return 2 * 3.14 * r;
}
void perimeterR(float r,float *result) {
    return 2 * 3.14 * r;
}

int main() {
    float radius, result;
    printf("Enter radius: ");
    scanf("%f", &radius);

    result = areaV(radius); // call by Value
    printf("Area of circle = %f\n", result);

    areaR(radius, &result);// call by reference
    printf("Area of circle = %f\n", result);

    result = perimeterV(radius); // call by value
    printf("Perimeter of circle = %f\n", result);

    perimeterR(radius, &result);  // call by reference
    printf("Perimeter of circle = %f\n", result);

    return 0;
}
