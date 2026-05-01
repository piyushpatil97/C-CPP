#include<stdio.h>

  void main (){
	  int x=19;
	  int ans=0;

	  ans= ++x + x++;

	  printf("%d %d\n",x,ans);// 21 41

  }
