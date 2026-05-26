#include<stdio.h>

 void main(){

         int flatno;
         char wing;
         float rent;

         printf("Enter flat no : \n");
         scanf("%d",&flatno);

         printf("Enter wing: \n");
         scanf("  %c",&wing);// two spaces are given before %c and input given is AB

         printf("Enter rent : \n");
         scanf("%f",&rent);

         printf("flatno is %d\n",flatno);
         printf("wing is %c\n",wing);
         printf("rent is %f\n",rent);

 }
