#include<stdio.h>
int main () {
float celsius, kelvin;
printf("Enter celsius: ");
scanf("%f", &celsius);
kelvin = celsius + 273.15;
printf("Temperature in kelvin is: %3.f", kelvin);
return 0;
}
