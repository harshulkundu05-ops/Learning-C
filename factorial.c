#include<stdio.h>
int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the number is negative
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.\n");
    else {
        for(i = 1; i <= n; i++) {
            factorial *= i; // factorial = factorial * i;
        }
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}