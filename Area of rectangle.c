#include<stdio.h>
int main () {
float radius, area;
const float PI = 3.1416;
printf("Enter the radius of the cirle: ");
scanf("%f", &radius);
area = PI * radius * radius;
printf("Area of the circle is: %3.f", area);
return 0;
}
