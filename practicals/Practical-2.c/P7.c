#include<stdio.h>
		
		void main (){

			int x,y;
 				
			printf("Enter value of x and y : \n");

			scanf("%d %d",&x,&y);

			if(x>y){
				printf("%d is greater than %d\n",x,y);
			}else if(x<y){
				printf("%d is greater than %d\n",y,x);
			}else{
				printf("both are equal");
			}
		}
