
#include <stdio.h>
int factorial(int a){
    if(a<=1){
        return 1;
    }else{
        return a*factorial(a-1);
    }
}
int main() {
    int num,b;
    printf("Enter your no : ");
    scanf("%d",&num);
    b=factorial(num);
    printf("factorial is : %d ",b);
    

    return 0;
}
