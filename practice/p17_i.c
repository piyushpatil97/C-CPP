#include<stdio.h>


void fun(){

                printf("fun x = %d\n",x);
                printf("fun y = %d\n",y);
}
void main(){
		int x=20;
		int y;
        printf("main x = %d\n",x);
        printf("main y = %d\n",y);
        fun();
}
