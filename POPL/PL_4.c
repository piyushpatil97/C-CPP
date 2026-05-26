#include<stdio.h>

void main(){
         int i,j,isprime;
	 int primecount = 0,evencount = 0,oddcount = 0;

		
                  printf("Even numbers:\n");
		  for(i=1;i<=1000;i++){
		 if (i%2==0){
			printf("%d",i);
			 evencount++;
		 }
	  
		 }
		  
		  printf("Odd numbers:\n");
		  for (i=1;i<=1000;i++){
		 if (i%2!=0){
		 printf("%d",i);
			  oddcount++;
		  }
	 }
	 printf("Prime numbers:\n");
	 for(i=2;i<=1000;i++){
		 if(i<1)
		continue;

		 isprime =1;
			 for (j=2;j<i;j++){
				 if (i%j == 0){
					 isprime = 0;
				 }
			 }
		 if (isprime){
			 printf("%d",i);
			 primecount++;
		 }
	 }
      printf("\nTotal Prime = %d\n",primecount);
      printf ("Total even = %d\n",evencount);
      printf("Total odd = %d\n",oddcount);
}
