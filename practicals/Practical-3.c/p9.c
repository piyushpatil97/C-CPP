#include<stdio.h>

void main(){
	 int a,b,c,x,y;
	 printf("Enter the values of a,b and c: \n");
	 scanf("%d %d %d",&a,&b,&c);

	 if(a*a+b*b==c*c){
		 printf("\n it is PYTHAGOREAN TRPLATE\n");
	 }else {
		 printf("\n it is NOT PYTHAGOREAN TRPLATE\n");
	 }
}

