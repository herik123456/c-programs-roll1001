#include<stdio.h>
void main()
{
    float fahrenheit,celsius;
    printf("enter temperature in fahrenheit : ");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("\ntemperature in celsius : %.2f",celsius);
}
