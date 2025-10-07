#include<stdio.h>
void main()
{
      float bamt;
      float damt;
      float namt;
      printf("\nenter the value of bamt :");
      scanf("%f",&bamt);
      damt=bamt*0.10;
      printf("\n%f",damt);
      namt=bamt-damt;
      printf("\n%f",namt);
}
