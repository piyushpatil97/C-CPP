#include<stdio.h>
void main(){
	
	int num,count=0;
	printf("ENter your number: ");
	scanf("%d",&num);

	for(int i=2;i<=10;i++){
		
		if (num%i==0){
			count++;
		}
	}
	printf("\nDivisor of %d between 2 and 10 is = %d\n",num,count);
	printf("\n-------------------------------------------\n");
}
