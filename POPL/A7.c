#include <stdio.h>

 int swap(int* a,int* b){ 
 int temp; temp =*a; *a=*b; *b=temp; 
 }

 int main (){
 
 		int x,y;
 printf("enter the value of x : ");
 scanf("%d",&x); 
printf("enter the value of y : ");
 scanf("%d",&y); swap(&x,&y); 
printf("value of x is : %d\n",x); 
printf("value of y is : %d\n",y);

 } 
