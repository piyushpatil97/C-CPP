#include<stdio.h>

void main(){

	int v1,v2,sum=0,product=1;
	scanf("%d %d",&v1,&v2);

	for(int i =v1;i<=v2;i++){

		sum=i+sum;
	
		product= i*product;
	}

		printf("%d\n %d\n",sum , product);

}




