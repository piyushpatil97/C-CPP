#include<stdio.h>

struct students{
	char name[100];
	int marks[5];
	int total;
	float percentage;
};
void main(){
	struct students s[10];
	float total_per=0;
	int FailOnesub=0;
	int passCount=0;
	int distinctionCount=0;

	printf("Enter the details of students: \n");

	for(int i=0;i<10;i++){

		printf("Enter the names of students :%d",i+1);
		scanf("%s",s[i].name);
		
		s[i].total=0;
	printf("Enter the marks of 5 subjects:\n");

	for(int j=0;j<5;j++){

		scanf("%d",&s[i].marks[j]);

		s[i].total+=s[i].marks[j];

	}
	
	s[i].percentage=(s[i].total/5.0);

	total_per+=s[i].percentage;

	int failsubject;

	for(int j=0;j<10;j++){
		if (s[i].marks[j]<35){
			
			failsubject++;
		}
	}
		if(failsubject==0){
			passCount++;
		}
		if (failsubject==1){
			FailOnesub++;
		}
		if(s[i].percentage>75){
			distinctionCount++;
		}
	}

		int overallpercentage= total_per/10;

		printf("Overall Percentage = %.2f%%\n ",overallpercentage);
		printf("Total number of passing students : %d",passCount);
		printf("Students failing in one subject: %d",FailOnesub);
		printf("Distinction count: %d",distinctionCount);
	}


