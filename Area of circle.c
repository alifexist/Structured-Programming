#include<stdio.h>
int main () {
float side, area;
printf("Enter the length of one side of a square: ");
scanf("%f", &side);
area = side * side;
printf("Area of the square is: %3.f", area);
return 0;
}
