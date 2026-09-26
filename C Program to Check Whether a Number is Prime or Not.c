#include <stdio.h>

int main() {
    long long num;
    int isPrime = 1;

    printf("Enter an integer: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (long long i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%lld is a prime number.\n", num);
    } else {
        printf("%lld is not a prime number.\n", num);
    }

    return 0;
}
