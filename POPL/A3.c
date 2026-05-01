#include<stdio.h>
int main(){
    int prime,c;
    c=0;
    printf("enter your no. : ");
    scanf("%d",&prime);
    for(int b=2;b<prime;b++){
        if(prime%b==0){
           c=c+1;
        }
    }
    if(c==0){
        printf("no. is prime");
    }else{
        printf("no is not prime ");
    }
    return 0;
}
