#include<stdio.h>

void main(){

	int size;
	printf("Enter size of elements: \t");
	scanf("%d",&size);

	int arr[size];
	int sum=0;

	for (int i=0;i<size;i++){

		printf("Enter value of Elements: \n");
		scanf("%d",&(arr[i]));
		sum=sum+(arr[i]);
	}
	printf("Elements of array: \n");
	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);

	}

	printf("Sum is %d\n",sum);
}


	

