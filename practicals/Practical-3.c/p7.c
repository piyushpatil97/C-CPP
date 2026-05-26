#include<stdio.h>
void main(){
		float CP=1200;
		float SP=1000;
		

		if (SP>CP){
			
			printf("\nAs Selling prise is grater than Cost Price\n");
			printf("profit is : %f\n",SP-CP);
		}else if(CP>SP){
			
			printf("\nAs Cost prise is grater than Selling Price\n");
			printf("Loss is : %f\n",CP-SP);
		}
}


