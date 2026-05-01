#include<stdio.h>
void main (){

	int x;
	scanf("%d",&x);

	if (x%7==0 && x>=21){
		printf("NUmber is divisible by 7 and greater than 21\n");
	}else if (x%7==0 && x<21){
		printf("NUmber is divisible by 7 and less than 21\n");
	}else{
		printf("Number is not divisible by 7\n");
	}
}	
