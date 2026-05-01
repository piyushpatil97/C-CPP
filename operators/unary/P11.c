#include<stdio.h>
 
void main (){
	int x=10;
	int ans=0;

	ans= x++ + x++;
	 printf("%d %d \n",x,ans);// 12,21
}
