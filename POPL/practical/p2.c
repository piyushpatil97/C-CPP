#include<stdio.h>

void printtable(int n){

	printf("table of %d is : \n",n);

	for(int i=1;i<=10;i++){

		printf("=%d\n",n*i);
	}
}
	
	int main(){
   				int n;

		printf("Enter value of n: \n");
		scanf("%d",&n);

		printtable(n); // arrgument
}
				
		
