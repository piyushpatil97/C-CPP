#include<stdio.h>

void main(){

	int unit,cost=0;
	printf("Enter number of units consumed: \n");
	scanf("%d",&unit);

	if(unit<=100){
		cost=5*unit;
		printf("total cost is = %d\n",cost);

	}else if(unit<=300){
		cost= 5*100 + 7*(unit-100);
		printf("total cost is = %d\n",cost);

	}else if(unit>300){
		cost = 5*100 + 7*200 + 10*(unit-300);
		printf("total cost is = %d\n",cost);
	}

}
