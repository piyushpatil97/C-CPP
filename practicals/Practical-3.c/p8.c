#include<stdio.h>



	void main(){


		float per;
		printf("Enter per obtained: ");
		scanf("%f",&per);

		if(per>=75.00){

			printf("\nStd passed with FIRST CLASS AND DISTINCTION\n");
		}else if(75.00>per && per>=60.00){
			printf("\nstd passed with First class\n");
		}else if (60.00<per && per>=50.00){
			printf("\nstd passed with SECOND CLASS\n");
		}else if(50.00>per && per>=40.00){
			printf("\nstd Has PASSED the exam \n");
		}else{
			printf("\nfailed\n");
		}
		printf("\n-----------------------\n");
	}
	
	

