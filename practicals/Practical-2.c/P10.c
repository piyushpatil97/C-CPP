#include<stdio.h>

		void main (){

			int x,y,z;
			printf("Enter  the angles of TRIANGLE : \n");

			scanf("%d %d %d",&x,&y,&z);

			if (x+y+z==180){
				printf("Given angles of triangles are valid\n");
			}else{
				printf("The triangle is invalid");
			}
		}
