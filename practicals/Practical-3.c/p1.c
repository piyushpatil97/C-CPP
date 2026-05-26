#include<stdio.h>

int main(){

	int num;
	printf("Enter your number: ");
	scanf("%d",&num);

	if(1<=num && num<=1000){
		printf("%d is in the range of 1 to 1000 \n",num);
	}else if (num>1000){
		printf("%d is not in the range of 1 to 1000 \n",num);
	}
}
