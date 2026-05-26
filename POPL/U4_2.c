#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 12, b = 18;

    int result = gcd(a, b);

    printf("GCD = %d\n", result);

    return 0;
}
