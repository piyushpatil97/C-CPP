#include<stdio.h>

            void main(){
		
		    int x,y,num;
		    printf("Number of rows: ");
		    scanf("%d",&x);
		    printf("Number of column: ");
		    scanf("%d",&y);

		    for (int i=1;i<=x;i++){
			    num=1;
			    for(int j=1;j<=x;j++){

				    printf("%d \t",num++);
			    }
		    printf("\n");
		    }
	    }

