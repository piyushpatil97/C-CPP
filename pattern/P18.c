#include<stdio.h>

void main(){
 		int num;
	for(int i=1;i<=3;i++){
		num=i;
		for(int j=1;j<=i;j++){

			printf("%c \t",64+num);
			num--;
		}
		printf("\n");
	}
}
