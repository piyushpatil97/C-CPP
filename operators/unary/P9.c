#include<stdio.h>
 void main (){
	 int x=10;
	 int y=30;
	 int ans=0;
	 
	 ans = ++x;
	 printf("%d\n",ans);

	ans=y++;
	 printf("%d\n,%d\n,%d\n",ans,x,y); // ans=30,x=11,y=31
 
 }
