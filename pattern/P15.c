#include<stdio.h>
	void main(){

		int x;
		int count=0;
		printf("value of x= : \n");
		scanf("%d",&x);

		for (int i=1;i<=x/2;i++){

			if(x%i==0){
			count++;	
			printf("%d\n",i);

		}
		}
			printf("%d\n",count);
	}
		
	



