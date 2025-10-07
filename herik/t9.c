#include<stdio.h>
void main()
{
      int maths;
      int stat;
      int eco;
      int total;
      int    average;
      printf("\nmaths :");
      scanf("%d",&maths);
      printf("\nstatistics :");
      scanf("%d",&stat);
      printf("\neconomics :");
      scanf("%d",&eco);
      total=maths+stat+eco;
      printf("\n%d",total);
      average=(total)/3;
      printf("\n%d",average);
}
      
