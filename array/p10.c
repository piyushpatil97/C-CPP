#include<stdio.h>

void main(){

	int size;
	printf("Enter size: \n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter elements of array : \n");

	for(int i=0; i<size ;i++){
		scanf("%d",&((arr[i])));
		}
		
		printf("Elements of array are : \n");

		for (int i=0;i<size ; i++ ){

		if((arr[i])%2==0){

			printf("element %d is even \n",arr[i]);
	
		} else if((arr[i])%2==1){
				
			printf("element %d is odd \n",arr[i]);
	}

   }			

}
