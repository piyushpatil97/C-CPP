#include<stdio.h>

void main(){
	int row,num;
	
	printf("Enter number of rows: ");
	scanf("%d",&row);
	num=row;	
	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			printf("%d\t",num);
		}
		printf("\n");
		num--;
	}

}				
