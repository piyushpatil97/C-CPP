#include<stdio.h>

void main(){

	char ch = 'E';

	switch(ch){

		default:{
				printf("No match found\n");
			}

		case 'A':{
			       printf("A\n");
			 }
			 break;
		case 'B':{
				 printf("B\n");
			 }break;

		case 'C':{
				 printf("C\n");
			 }break;
		case 'D':{
				 printf("D\n");
			 }break;
	}
}
