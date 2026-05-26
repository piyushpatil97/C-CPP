#include<stdio.h>
void main(){
	int r,num;
	printf("Enteer number of rows: ");
	scanf("%d",&r);

	for (int i=1;i<=r;i++){
		int num=i;
		for(int spc=1;spc<=i;spc++){
			printf("\t");
		}
		for(int j=1;j<=2*r-2*i+1;j++){

			printf("%d\t",num);
			num++;
		}
		printf("\n");
	}
}

