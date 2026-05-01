#include<stdio.h>

void main (){

	int x=25;
	int ans=0;

	ans=++x + x++;
	printf("%d %d\n",ans,x);// 53,27
}
