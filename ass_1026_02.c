#include<stdio.h>
void main()
{
    float meters,centimeters;
    printf("enter meters : ");
    scanf("%f",&meters);
    centimeters=meters*100;
    printf("\n%.2f meters equal to %.2f centimeters",meters,centimeters);
}
