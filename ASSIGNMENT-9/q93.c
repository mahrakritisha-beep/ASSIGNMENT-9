#include <stdio.h>
int sumDigits(int n) {
    int sum = 0;

    if (n < 0)
        n = -n;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}
int countDigits(int n) {
    int count = 0;

    if (n == 0)
        return 1;

    if (n < 0)
        n = -n;

    while (n > 0) {
        count++;
        n /= 10;
    }

    return count;
}
int reverse(int n) {
    int rev = 0;

    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return rev;
}
int isPalindrome(int n) {
    return n >= 0 && n == reverse(n);
}
int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Sum of digits = %d\n", sumDigits(n));
    printf("Number of digits = %d\n", countDigits(n));
    printf("Reverse = %d\n", reverse(n));

    if (isPalindrome(n))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}