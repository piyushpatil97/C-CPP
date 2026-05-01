#include<stdio.h>
 void main (){
	 int x=1;
	 int y=2;
	 int z=3;
	 int ans=0;

	 ans=(x++ || y++) && ++z;
	 printf("%d,%d,%d\n",x,,y,z,ans);// 2,2,4,1
 }
