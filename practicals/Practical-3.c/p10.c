#include<stdio.h>

void main(){
	int child,adult,bill;
	float time;
	printf("What time it is : ");
		scanf("%f",&time);
	printf("How many childs are there with you : ");
	scanf("%d",&child);
	printf("How many adults : ");
	scanf("%d",&adult);


	if(7.00<=time && time<=12.00){

		bill= 30*child + 50*adult;
		printf("Your bill is %d\n",bill);
	}else if(12.00<time && time<=5.00){

		bill=20*child+40*adult;
		printf("Your bill is %d\n",bill);
	}else if(5.00<time && time<=9.00){

		bill= 50*child+70*adult;
		printf("Your bill is %d\n",bill);
	}
}
