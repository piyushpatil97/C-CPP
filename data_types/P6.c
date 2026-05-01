









#include<stdio.h>

   void main (){

          char ch1 = 65;    // -128 to 127
	  char ch2= -128;
	  char ch3= 130;
	  printf("%c\n",ch1);    //A
	  printf("%d\n",ch1);    //65
	  printf("%d\n",ch2);    //-128
	  printf("%d\n",ch3);    //130    // it will go till 127 the it will start from reverse direction as 127 then -1                                                28 for 128 then -127 for 129 and // -126 for 130 
     
        }
