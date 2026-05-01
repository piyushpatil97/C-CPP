#include<stdio.h>
    void main  (){
	    int x=12;
	    int ans=0;
	     ans = x++ + x++ + x++;
	     printf("%d %d\n",x,ans); // 15,39
    } 
