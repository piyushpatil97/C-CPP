#include<stdio.h>

void main (){
	int x=27;
	innt ans=0;

	ans= ++x + ++x;
	printf("%d\n",ans);//58
	printf("%d\n",x);//29
}
