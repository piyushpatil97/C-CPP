#include<stdio.h>

struct emp{

  char name[100];
  int id;
  float salary;
  
};
   int main (){
	   int x;
           struct emp e;

	for (x=1;x<=10;x++){

        printf("EMPLOYE %d :\n",x);
           scanf("%s\n",e.name);
           printf("I'D of employe %d :\n ",x);
           scanf("%d\n",&e.id);
           printf("SALARY of employe %d :\n ",x);
           scanf("%f\n",&e.salary);
               printf("\nEmploye Details: %s, %d, %f\n", e.name, e.id, e.salary);

	       printf("_________________________________________________________");

   }
   }
