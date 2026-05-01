#include<stdio.h>

 void main(){

         char ch = 'B';

         switch (ch) {

                 case 'a': {
                                   printf("A\n");
                           }break;

                 case 'b': {
                                   printf("B\n");
                           }break;


                 case 'c': {
                                   printf("C\n");
                           }break;


                 case 97: {
                                   printf("A\n");
                           }break;

                 case 98: {
                                   printf("B\n");
                           }break;
                 case 99: {
                                   printf("C\n");
                           }break;


                 default:{
                                 printf("No match\n");
                         }
         }

         }
~
