/non recursive Fibonacci_series
#include <stdio.h>

int Fibonacci_series(int a){
        int temp =1,d,c=0;        
        for(int b=0;b<a;b++){
            d=c;
            c=temp+c;
            temp=d;
            printf("% d | ",c);
        }
}
int main(){
    int num ;
    printf("Enter no up yo you want Fibonacci series ");
    scanf("%d",&num);
    Fibonacci_series(num);
    return 0;
}

