#include<stdio.h>

 void main (){

	 char ch = 'B';


	 switch(ch){

	 case 'A':{
			    printf("A\n");
		    }break;
	 case 'B': {
			   printf("B\n");
		   }break;
	 case 'C':{
			  printf("C\n");
		  }break;
         case 'a':{
			  printf("a\n");
		  }break;
         default:
		  {
			  printf("No match\n");
		  }
 }
 }
