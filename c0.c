#include<stdio.h>
void main()
{
      int i,n,count=0;
      printf("\nenter the value of n :");
      scanf("%d",&n);
      for(i=1;n!=0;i++)
      {
            n/=10;
            count++;
      }
      printf("\ntotal digits=%d",count);
}
