#include<stdio.h>

int x=10;
int y;

void fun(){

		printf("fun x = %d\n",x);
		printf("fun y = %d\n",y);
}
void main(){

	printf("main x = %d\n",x);
	printf("main y = %d\n",y);
	fun();
}

