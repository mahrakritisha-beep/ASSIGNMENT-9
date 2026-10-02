#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float divide(int a, int b) { return (float)a / b; }
int mod(int a, int b) { return a % b; }

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    printf("Addition = %d\n", add(a, b));
    printf("Subtraction = %d\n", sub(a, b));
    printf("Multiplication = %d\n", mul(a, b));

    if (b != 0) {
        printf("Division = %.2f\n", divide(a, b));
        printf("Modulus = %d\n", mod(a, b));
    } else {
        printf("Division by zero not possible\n");
        printf("Modulus by zero not possible\n");
    }

    return 0;
}