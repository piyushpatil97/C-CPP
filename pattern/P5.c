#include<stdio.h>

        void main(){

                int x,y;
		int a=12;
                printf("Enter number of rows and colum: \n");
                scanf("%d %d",&x,&y);

                for (int i=1;i<=x;i++){

                        for(int j=1;j<=y;j++){


                                printf("%d \t",a--);
                        }
                        printf("\n");
                }
        }
