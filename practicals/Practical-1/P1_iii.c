#include<stdio.h>

void main(){
  
      int x = 19;
        int ans=0 ;

    printf("%d\n",x);

    ans= x++ + --x - x++;
   
   printf("%d\n %d\n",ans,x); // ans=19 , x= 20 
}  
