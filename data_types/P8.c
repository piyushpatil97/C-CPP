


#include<stdio.h>

void main () {

           int x=10;
	   
	   printf("%d\n",x); //10

	   x=x+1;

	   printf("%d\n",x);  //11
                 


	  const int y=10;
	   
	  printf("%d\n",y);
	   
	  y=y+1;   // this will give error bcuz y is constant

	  printf("%d\n",y);
} 

