#include<stdio.h>
void main()
{
      int i,n,sum=0;
      printf("\nenter the value of n :");
      scanf("%d",&n);
      for(i=1;n!=0;i++)
      {
            sum+=n%10;
            n=n/10;
      }
      printf("sum=%d",sum);
}
