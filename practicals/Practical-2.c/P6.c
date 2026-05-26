#include<stdio.h>
 
	void main (){
		int x;

		 scanf("%d",&x);
			 if(x%7==0 && x%3==0){
				 printf("NO is divisible by both 3 and 7 \n");
			 }else if (x%7==0 && x%3!=0) {
				 printf("NO is not divisible by 3\n");
			 }else if (x%3!=0 && x%3==0) {
                                 printf("NO is not divisible by 7\n");
			 }else {
				 printf("NO is not divisible by both 3 and 7\n");
			 }
	
	}
