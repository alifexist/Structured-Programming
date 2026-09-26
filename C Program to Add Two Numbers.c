#include <stdio.h>

int main ()
{
    int num1, num2, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("Sum of the two numbers is: %d", sum);

    return 0;
}
