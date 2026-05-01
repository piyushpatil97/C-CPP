#include<stdio.h>
 
void main (){
	int x=5;
	int y=6;
	int ans=0;

	ans = ++x && --y;

	printf("%d,%d,%d\n",x,y,ans);// 6,5,1

	ans= ++x | --y; 

        printf("%d,%d,%d\n",x,y,ans);// 7,4,7

	ans= x ^ y; 

	 printf("%d,%d,%d\n",x,y,ans);// 7,4,3
}


	
