#include<stdio.h>

void main (){

	int num=25;
	int count=0;
	int rem,q;

		rem=num%10;
		count++;
		q=num/10;
		printf("%d \t %d \n",q,rem);

		printf("count of digits :%d",count);

}



		
