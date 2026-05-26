#include <stdio.h>

int findMax(int a, int b);

int main() {
    int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

       max = findMax(num1, num2);
   
    printf("Max = %d\n", max);

    return 0;
}
int findMax(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}
