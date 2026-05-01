#include<stdio.h>

void main (){

	int x;
	scanf("%d",&x);

	if (x>0){
		printf("%d is positive\n",x);
	}else if(x<0){
		printf("%d is negative\n",x);
	}else if (x==0){
		printf("%d is neutral\n",x);
	}
}

