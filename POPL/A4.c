#include <stdio.h> 

 int main() { 

    int size,a,temp=0; 

    printf("enter no of element in array :  "); 

    scanf("%d",&size); 

    int arr[size]; 

    printf("enter your array elments :  "); 

     
	for(a=0;a<size;a++){ 

        scanf("%d",&arr[a]); 

    } 

         for(a=0;a<size;a++){ 

        if(temp<arr[a]){ 

            temp=arr[a]; 

        } 

    } 

    printf("the largest element of that array :%d ",temp); 

   return 0; 

} 

