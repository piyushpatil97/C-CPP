#include<stdio.h>
void main(){
		int num=0,r=3;
		
	for(int i=1;i<=r;i++){
		num=i;
		for (int spc=1;spc<=r-i;spc++){
			printf("\t");
		}
		for(int j=1;j<=2*i-1;j++){
			printf("%d\t",num);
			num++;
		}
		printf("\n");
	}

}
		
