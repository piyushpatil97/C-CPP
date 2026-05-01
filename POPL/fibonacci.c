#include<stdio.h>

printfib(int);
fib(int,int,int);

int main(){
         
	int n;
	printf("enter no of terms\n");
	scanf("%d",&n);
	printfib(n);
}
	printfib(int n);
{
	if (n<0 || n==0){
		printf("invalid\n");
	}
	else if (n==1){
		printf("0\n");
	}
	else if(n==2){
		printf("0,1\n");
	}
	else {
		printf("0,1\n");
		fib(n,0,1);
	}return 0;
	{
	fib(int num;int p1;int p2);
		int chr;
		if(num<3){

			return;
		}
		chr= p1 + p2 ;
			printf("%d",chr);
		fib(num-1,p2,chr);
	}
}

