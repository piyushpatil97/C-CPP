#include <stdio.h>
 
void main(){
        extern int x;              // when i insert extern before x then it becomes DECLERATION and decleration does not                                      
				   
	int age = 25;
	int jerNO;               // both are DEFINATION

														      printf("%d\n",jerNO); // garbage Value(GV) or 0
    	printf("%d\n",age);  
	printf("%d\n",x);  // error


}

