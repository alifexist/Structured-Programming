#include <stdio.h>

int main ()
{
    double num1, num2, product;

    printf("Enter two floating-point numbers: ");
    scanf("%lf %lf", &num1, &num2);

    product = num1 * num2;

    printf("Product = %.2f", product);

    return 0;
}
