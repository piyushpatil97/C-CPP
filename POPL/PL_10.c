#include <stdio.h>

float calculateArea(float base, float height) {
    return 0.5 * base * height;
       }

	int main() {
    	float base, height, area;

    	printf("Enter base of triangle: ");
    		scanf("%f", &base);
	
	    printf("Enter height of triangle: ");
    	
	    scanf("%f", &height);

    	area = calculateArea(base, height);

    	printf("Area of triangle = %.2f\n", area);

   	return 0;
}
