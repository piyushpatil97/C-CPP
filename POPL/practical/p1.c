#include<stdio.h>

int sum(int x, int y){

	return x+y;
}

void main(){

	int a,b;
	printf("Enter values of a and b : \n");
	scanf("%d %d",&a,&b);

	int s=sum(a,b);

	printf("Sum is : %d\n",s);


}
