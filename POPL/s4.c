#include<stdio.h>

void main(){
		int n,temp;
		printf("Enter the value of n: \n");
		scanf("%d",&n);

		int arr[n];
			
		printf("Enter the elemens of  array : \n");
		
		for (int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		for(int i=0;i<n;i++){

			if(temp<arr[i]){

				temp=arr[i];
			}
		}
		printf("The largest element of array is : %d\n",temp);

}

