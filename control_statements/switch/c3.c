#include<stdio.h>

 void main(){

	 char ch = 'B';

	 switch (ch) {

		 case 'A': {
				   printf("A\n");
			   }break;

		 case 'B': {
				   printf("B\n");
			   }break;


		 case 'C': {
				   printf("C\n");
			   }break;


		 case '65': {
				   printf("A\n");
			   }break;

		 case '66': {
				   printf("B\n");
			   }break;
		 case '67': {
				   printf("C\n");
			   }break;\


		 default:{
				 printf("No match\n");
			 }
	 }

	 }
