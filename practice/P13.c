#include<stdio.h>

void main (){

	      	int even_count=0,odd_count=0;
		for(int i=1;i<=100;i++){
			if (i%2==0){
				even_count++;
				printf("Even number %d\n",i);
			}else if (i%2==1){
				odd_count++;
				printf("Odd number %d\n",i);
			}
		}

			printf("Total number of even numbers: %d \n",even_count);
			printf("Total number of odd numbers: %d \n",odd_count);
		}
