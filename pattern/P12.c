#include<stdio.h>

		void main(){
			
			int num=1;
			for(int i=1;i<=3;i++){
				for (int j=1;j<=3;j++){

					if(j%2==1){
						printf("%c \t",64+num);
					} else if (j%2==0){
						
						printf("%c \t",96+num);

					}
					num++;
					
				}
				printf("\n");
			}
		}
