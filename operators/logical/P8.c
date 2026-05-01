#include<stdio.h>

void main (){
	int x=0;
	int y=1;
	int z=3;
	int ans=0;

	ans=(x++ || --y) && ++z;

	printf("%d,%d,%d,%d\n",x,y,z,ans); // 1,0,3,0
}
