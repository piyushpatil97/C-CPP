#include<stdio.h>

void main (){

	int count=0;

	for (int i=1;i<=100;i++){

		if (i%2==0){
			
			count++;
		}
			
	}
	printf("Number even numbers are %d\n",count);
	printf("\n");
}
