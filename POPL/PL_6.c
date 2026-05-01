#include<stdio.h>

struct emp{
	char name[100];
  int id;
  float salary;
};
   int main (){
	   struct emp e1;

  	printf("Enter the name of employe :\n");
	   scanf("%s",e1.name);
	   printf("Enter the id of employe :\n ");
	   scanf("%d",&e1.id);
	   printf("Enter the salary of employe :\n ");
	   scanf("%f",&e1.salary);
	       printf("\nEmployee Details: %s, %d, %f\n", e1.name, e1.id, e1.salary);
   }
