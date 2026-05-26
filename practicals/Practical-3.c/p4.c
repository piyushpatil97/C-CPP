#include<stdio.h>
void main(){

	char ch;
	printf("Enter the character to check : ");
	scanf("%c",&ch);

	if (ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'|| ch=='A'|| ch=='E'||ch=='I'||ch=='O'||ch=='U'){

		printf("%c is VOWEL \n",ch);
	}else {

		printf("%c is consonat \n",ch);
	}
}
	
	
