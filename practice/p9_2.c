#include<stdio.h>

 void main(){

         int flatno;
         char wing;
         float rent;

	 printf("Enter wing: \n");
         scanf("%c",&wing);// this is one method that wrting string at first but it depends on the user that what he                             wants so this method is not proffesional

         printf("Enter flat no : \n");
         scanf("%d",&flatno);

         printf("Enter rent : \n");
         scanf("%f",&rent);

         printf("flatno is %d\n",flatno);
         printf("wing is %c\n",wing);
         printf("rent is %f\n",rent);

 }
