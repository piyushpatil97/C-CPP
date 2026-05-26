#include<stdio.h>

		void main(){

			int x=20;
			int sum=0;

			for(int i=1;i<=x/2;i++){

				if(x%i==0){

					printf("%d \t",i);
				}
				sum=sum+i;
			}
			printf("the sum is: %d\n",sum);
		}

