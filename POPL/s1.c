#include<stdio.h>

void main(){

	int courses,sum=0,per;
	printf("Enter number of courses; \n");
	scanf("%d",&courses);

	int arr[courses];

	printf("Enter the marks of %d courses : \n",courses);

	for (int i=0;i<courses;i++){

		scanf("%d",&(arr[i]));
	}
	for (int i=0;i<courses;i++){

		sum=sum+arr[i];
	}
	per= (sum/courses);

	printf("Percentage are: %d\n",per);

	if(per>75){
		printf("Grade is distinction\n");
	}else if (70>per>60){
		printf("Grade is 1st Division\n");
	}else if (60>per>50){
		printf("Grade is 2nd division\n");
	}else{
		printf("FAIL\n");
	}
}



