#include <stdio.h>

int main() {
    int num, originalNum, rem, i;
    int fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum > 0) {
        rem = originalNum % 10;

        fact = 1;
        for (i = 1; i <= rem; i++) {
            fact = fact * i;
        }


        sum = sum + fact;

        originalNum = originalNum / 10;
    }

    if (sum == num && num > 0) {
        printf("%d is a Strong number.\n", num);
    } else {
        printf("%d is not a Strong number.\n", num);
    }

    return 0;
}
