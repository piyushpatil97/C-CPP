#include<stdio.h>
void main(){

	float per;

	printf("Enter percentage obtained: ");
	scanf("%f",&per);

	if (per>85.00){
		printf("\nMEDICAL\n");
	}else if(75.00<per && per<=85.0){
		printf("\nENGINEERING\n");
	}else if(65.00<=per && per<=75.00){
		printf("\n PHARMACY OR BACHELOR IN SCIENCE\n");
	}else{
		printf("\nBHAI TU KHUP MOTHA MANUS BANNAR AHES\n");

	}
}
