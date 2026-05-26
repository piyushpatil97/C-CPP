#include<stdio.h>

 void main(){

         int flatno;
         char wing;
         float rent;

         printf("Enter flat no : \n");
         scanf("%d",&flatno);

         printf("Enter wing: \n");
	 scanf(" %c",&wing); // if we give space before %c then the then the \n of enter button of key is not read by 					char and it gets dispose and the cursor remains at the wing section 

         printf("Enter rent : \n");
         scanf("%f",&rent);

         printf("flatno is %d\n",flatno);
         printf("wing is %c\n",wing);
         printf("rent is %f\n",rent);

 }
