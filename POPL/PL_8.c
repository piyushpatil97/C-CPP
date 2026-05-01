#include<stdio.h>

struct student{

  char name[100];
  float marks[5];
  char grade[5][4];

};
   int main (){
           int x,j;
           struct student s[5];
	   char *subject[]={"POPL","MC","WDL","PHY","LS"};

        for (x=0;x<5;x++){

       		 printf("STUDENT NAME %d :\n",x);
         	
			scanf("%s\n",s[x].name);

	   for (j=0;j<5;j++){

          	 printf("MARKS OBTAINED %s :\n ",subject[j]);
           
   			   scanf("%f\n",&s[x].marks[j]);

	   if (s[x].marks[j]>=90){
		  	printf("This student has O grade\n");
	   }
	   else if (s[x].marks[j]>=80){
                 	 printf("This student has A++ grade\n"); 
	   }
          else if (s[x].marks[j]>=70){
                  	printf("This student has A grade\n");
	  }
		  else if (s[x].marks[j]>=60){
                 		 printf("This student has B grade\n");
		  }
		  else {
		     	 printf("This student has E grade \n");

}
}}
               printf("\n students Details: %s, %f, %s\n",s[5].name,s[5].marks,s[5].grade);
               		 printf("---------------------------------------------------------\n");
   }
   
