#include<stdio.o>

    void main(){

	    int x=10;
	    int y=20;

           int ans=0;
       ans = ++x || y++;

       printf("%d,%d,%d\n",ans,x,y); // 1,11,20 

 }
