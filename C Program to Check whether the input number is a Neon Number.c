#include <stdio.h>

int main() {
    int num, square, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    while (square != 0) {
        rem = square % 10;
        sum = sum + rem;
        square = square / 10;
    }

    if (sum == num) {
        printf("%d is a Neon number.\n", num);
    } else {
        printf("%d is not a Neon number.\n", num);
    }

    return 0;
}
