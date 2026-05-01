#INClude<stdio.h>
#include<string.h> 
   int main (){

enum mar_status{
	married,unmarried,divorced,widow};

struct indt{
	char name[1024];
	enum mar_status stat;};
struct indt p1;


  strcpy (p1.name,"piyush");
    
    p1.stat = married;
  
    if (p1.stat == married){
        
	     printf("%s is married\n",p1.name);
}else{

	printf("%s is unmarried\n",p1.name);
}}

