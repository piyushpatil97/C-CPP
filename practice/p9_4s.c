#include<stdio.h>

 void main(){

         int flatno;
         char wing;
         float rent;

         printf("Enter flat no : \n");
         scanf("%d",&flatno);

	 getchar();

         printf("Enter wing: \n");
         scanf("%c",&wing);

         printf("Enter rent : \n");
         scanf("%f",&rent);

         printf("flatno is %d\n",flatno);
         printf("wing is %c\n",wing);
         printf("rent is %f\n",rent);

 }
