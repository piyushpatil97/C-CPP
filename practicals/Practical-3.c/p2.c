#include<stdio.h>

void main(){
		
	int a,b;
	printf("Enter the value of a and b : \n");
	scanf("%d %d",&a,&b);

	if (a>b){
		printf("%d is greater than %d \n",a,b);
	}else if(b>a){
		printf("%d is greater than %d \n",b,a);
	}else if(a==b){
		printf("%d is equal to %d \n",a,b);
	}
}

