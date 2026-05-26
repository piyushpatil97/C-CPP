#include<stdio.h>
void main(){
        int row;
        printf("Enter number of rows: \n");
        scanf("%d",&row);

        for (int i=1;i<=row;i++){
                int num=i;
                for (int spc=0;spc<=i;spc++){
                        printf("\t");
                }

                for (int j=1;j<=row-i+1;j++){
                        printf("%d\t",num++);

                }
                printf("\n");
                }

}
