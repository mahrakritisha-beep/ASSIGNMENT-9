#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

int isPrime(int n) {
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int isPerfect(int n) {
    int i, sum = 0;

    if (n <= 1)
        return 0;

    for (i = 1; i <= n / 2; i++)
        if (n % i == 0)
            sum += i;

    return sum == n;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nClassification Report:\n");

    printf("%s\n", isEven(n) ? "Even" : "Odd");

    if (n > 0)
        printf("Positive\n");
    else if (n < 0)
        printf("Negative\n");
    else
        printf("Zero\n");

    printf("%s\n", isPrime(n) ? "Prime" : "Not Prime");
    printf("%s\n", isPerfect(n) ? "Perfect" : "Not Perfect");

    return 0;
}