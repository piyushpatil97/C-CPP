#include<stdio.h>
	void main(){

		int r,num;
		printf("Enter number of roows: ");
		scanf("%d",&r);

	for(int i=1;i<=r;i++){
		num=0;
		for(int j=1;j<=r-i+1;j++){
			printf("%d\t",num+j);
		}
		num++;

		printf("\n");
	}
	}

	


			
