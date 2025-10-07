#include<stdio.h>
void main()
{
      int i,n;
      printf("\nenter the value of n :");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
            printf("\n%d*%d=%d",n,i,n*i);
      }
}
