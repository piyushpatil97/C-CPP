#include<stdio.h>
		
		void main (){

			int x,y,temp;
			printf("Emter value of x:\n ");
			scanf("%d",&x);

			printf("Emter value of y:\n ");
			scanf("%d",&y);

			printf("Emter value of temp :\n");
			scanf("%d",&temp);

			temp=y;
			y=x;

			x=temp;
			temp=0;

			printf("%d\n",x);

			printf("%d\n",y);
			
			printf("%d\n",temp);
		}


