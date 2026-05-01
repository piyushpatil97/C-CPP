#include<stdio.h>
 void main(){
	 int x=31;
	 int ans=0;
        
	 ans = x++ + x++;
	 printf("%d %d\n",ans,x);//63,33
 }

