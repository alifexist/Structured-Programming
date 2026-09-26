#include <stdio.h>

int main() {
    int num, temp, square, flag = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    temp = num;
    square = num * num;

    while (temp > 0) {
        if (temp % 10 != square % 10) {
            flag = 0;
            break;
        }
        temp = temp / 10;
        square = square / 10;
    }

    if (flag == 1) {
        printf("%d is an Automorphic number.\n", num);
    } else {
        printf("%d is not an Automorphic number.\n", num);
    }

    return 0;
}
