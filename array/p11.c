#include<stdio.h>

#include<stdio.h>

void main(){

        int size;
	int even_count=0;
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
			even_count++;

                } else if((arr[i])%2==1){

                        printf("element %d is odd \n",arr[i]);
        }

   }
		printf("even count %d \n",even_count);
		printf("odd count %d \n",size-even_count);


}
