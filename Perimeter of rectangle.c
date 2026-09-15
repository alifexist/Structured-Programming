#include<stdio.h>
int main () {
float celsius, fahrenheit;
printf("Enter celsius: ");
scanf("%f", &celsius);
fahrenheit = (celsius * 9/5) + 32;
printf("Temperature in fahrenheit is: %3.f", fahrenheit);
return 0;
}
