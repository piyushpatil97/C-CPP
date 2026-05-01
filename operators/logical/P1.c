#include<stdio.h>
 void main (){
	 int x=10;
	 int y=20;
	 int ans=0;

	 ans= ++y && x++;

	 printf("%d\n%d\n%d\n",ans,x,y);//1,21,11
 }
