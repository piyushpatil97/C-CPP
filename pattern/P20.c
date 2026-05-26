#include<stdio.h>

void main(){
	int num=4;

	for(int i=1;i<=4;i++){
		for(int j=1;j<=num;j++){

			printf("* \t");
		}
		num--;
		printf("\n");
	}
}
