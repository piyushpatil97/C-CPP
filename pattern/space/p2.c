#include<stdio.h>
void main(){

	int r,num;
	printf("Enter number of rows: ");
	scanf("%d",&r);

	num=(r*(r+1))/2;

	for (int i=1;i<=r;i++){

		for(int spc=1;spc<=i-1;spc++){
			printf("\t");
		}
		for(int j=1;j<=r-i+1;j++){
			printf("%d\t",num);
			num--;
		}
		printf("\n");
	}
}
