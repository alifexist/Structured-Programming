#include<stdio.h>
int main () {
float length, width, area;
printf("Enter the length and width of the rectangle: ");
scanf("%f %f", &length, &width);
area = length * width;
printf("Area of the reactangle is: %3.f", area);
return 0;
}
