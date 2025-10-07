#include<stdio.h>
void main()
{
      int i=10,n=1;
      printf("\nenter the value of n :");
      scanf("%d",&n);
      do
      {
          printf("\n%d",i);
          i--;
      }while(i>=n);
}   
