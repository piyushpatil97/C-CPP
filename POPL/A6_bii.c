#include <stdio.h>
int factorial(int a){
    int b=1;
    while(a!=0){
        b=b*a;
        a--;
    }
    printf("factorial is : %d ",b);
}
int main() {
    int num,b;
    printf("Enter your no : ");
    scanf("%d",&num);
    b=factorial(num);
    

    return 0;
}
