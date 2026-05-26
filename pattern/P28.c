#include<stdio.h>
void main(){

	int r,num;
	
	printf("enter number of rows : ");
	scanf("%d",&r);

	for (int i=1;i<=r;i++){
		num=i;
		for(int j=1;j<=i;j++){

			printf("%c\t",64+num);
		num--;
		}
	         
		printf("\n");
	}
}
