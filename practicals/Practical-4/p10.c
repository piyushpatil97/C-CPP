#include<stdio.h>
void main(){

        int count=0;
        for(int i=0;i<=100;i++){
                if (i%2==0 && i%5==0){
                        count++;
			printf("%d\t",i);
                }
        }
	printf("\n");
        printf("%d\n",count);
        printf("\n------------------------------\n");
}
