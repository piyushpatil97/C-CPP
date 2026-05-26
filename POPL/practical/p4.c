#include<stdio.h>

void temp(float celcius){

	float far = celcius * (9/5) +32 ;

	printf("tem in farenhite is : %f\n",far);
}
	void main(){

		float celcius;
		printf("Enter temp in celcius: \n");
		scanf("%f",&celcius);

		temp(celcius);
	}
