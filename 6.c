//recursive Fibonacci_series
#include <stdio.h>
int Fibonacci_series(int a){
       static int temp =1,d,c=0;
        if(a!=0){
            d=c;
            c=temp+c;
            temp=d;
            printf("% d | ",c);
            a--;
            Fibonacci_series( a);
             }
}
int main(){
    int num ;
    printf("Enter no up yo you want Fibonacci series ");
    scanf("%d",&num);
    Fibonacci_series(num);
    return 0;
    }

