#include <stdio.h>

int gcd(int a, int b) {
    int r;

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int a, b, c, g, l;

    printf("Enter three positive integers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Enter positive integers only.\n");
        return 0;
    }

    g = gcd(gcd(a, b), c);
    l = lcm(lcm(a, b), c);

    printf("GCD = %d\n", g);
    printf("LCM = %d\n", l);

    return 0;
}