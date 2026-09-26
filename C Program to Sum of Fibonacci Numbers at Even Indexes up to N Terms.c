#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, nextTerm;
    int sum = 0;

    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    printf("Fibonacci numbers at even indexes: ");

    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            printf("%d ", t1);
            sum += t1;
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\nSum of Fibonacci numbers at even indexes = %d\n", sum);

    return 0;
}
