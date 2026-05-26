#include<stdio.h>

		void main (){
				int x,y;
			printf("num of rows: ");
			scanf("%d",&x);
			printf("num of coloumn: ");
			scanf("%d",&y);


			for(int i=0;i<=x;i++){
				for (int j=0;j<=y;j++){

					if (i%2==0){
						printf("* \t");
					}else{
						printf("# \t");
					}
				}
				printf("\n");
			}
		}
			

