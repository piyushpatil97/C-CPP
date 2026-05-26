#include<stdio.h>
 void main (){
   	 char ch;
		printf("Enter the character: \n");
         	
		scanf("%c",&ch);

        if (65<=ch && ch<=90){

		printf("UPPERCASE\n");
		
	}else if(97<=ch && ch<=122){
		
		printf("LOWERCAASE\n");
	}else {
		printf("Invalid\n");
 }
 }
