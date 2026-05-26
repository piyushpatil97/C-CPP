#include<stdio.h>

		void main(){

			int x;
			printf("Enter number between 0-7 : \n");
			scanf("%d",&x);

			switch(x){

				case 1:{
					       printf("Monday\n");
				       }break;

				case 2:{
					       printf("Tueseday\n");
				       }break;
				case 3:{
					       printf("Wednesday\n");
				       }break;
				case 4:{
					       printf("Thursady\n");
				       }break;
				case 5:{
					       printf("Friday\n");
				       }break;
				case 6:{
					       printf("Saturday\n");
				       }break;
				case 7:{
					       printf("Sunday\n");
				       }break;
			default:{
					printf("Invalid input\n");
				}
			}
		}
