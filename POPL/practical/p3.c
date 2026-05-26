#include<stdio.h>

void calculatecost(float ini_cost){
		float total_cost;
	total_cost = ini_cost + (0.18 * ini_cost);
	printf("%f\n",total_cost);
}
void main(){

	float ini_cost;

	printf("Enter ini cost: \n");
	scanf("%f",&ini_cost);

	calculatecost(ini_cost);
}

