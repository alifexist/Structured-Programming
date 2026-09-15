#include<stdio.h>
int main () {
    int a, b, c, sum;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    printf("The sum of the three numbers is: %d \n", sum);
    float average = (float) sum / 3;
    printf("The average of the three numbers is: %.3f \n", average);
    return 0;


}
