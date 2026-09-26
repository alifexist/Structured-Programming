#include <stdio.h>

int main() {
    long long num, original, reversed = 0, remainder;

    printf("Enter an integer: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (num < 0) {
        printf("%lld is not a palindrome.\n", num);
        return 0;
    }

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed) {
        printf("%lld is a palindrome.\n", original);
    } else {
        printf("%lld is not a palindrome.\n", original);
    }

    return 0;
}
