#include<stdio.h>

		void main(){

			int x;
			printf("Enter your marks: \n");
			scanf("%d",&x);

			if (90<=x && x<=100){

				printf("A grade\n");

			}else if(80<=x && x<=90){

				printf("B grade\n");

			}else if (70<=x && x<=80){
				printf("C grade\n");

			}else if(60<=x && x<=70){
				printf("D grade\n");
			
			}else{
				printf("Your are failed\n");
			}
		}

