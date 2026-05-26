#include<stdio.h>

void main(){

	int year;
	printf("Enter the year : ");

	scanf("%d",&year);

	if(year%4==0){

		printf("Entred Year is \tLEAP YEAR\t \n");
	}else {
		
		printf("Entred Year is \tNOT A LEAP YEAR\t \n");
	}
	printf("\n---------------------------------\n");

}
		
