#include<stdio.h>
		void main(){

			for (int i=1;i<=3;i++){

				for(int j=0;j<=3;j++){

					if (j%2==0){
						printf("* \t");
					}else{
						printf("# \t");
					}
				}
				printf("\n");
			}
		}

