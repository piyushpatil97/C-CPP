#include<stdio.h>

void main(){
        int row,num;

        printf("Enter number of rows: ");
        scanf("%d",&row);
       
        for(int i=1;i<=row;i++){
		num=row;
                for(int j=1;j<=i;j++){
                        printf("%d\t",num--);
                }
                printf("\n");
                
        }

}
