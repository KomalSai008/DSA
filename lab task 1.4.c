// To calcute the gcd of two numbers usig the recursion
#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main() {
    int a, b;
    printf("Enter the value of a,b: ");
    scanf("%d %d", &a, &b);
    printf("GCD is %d", gcd(a, b));
    return 0;
}

