#include<stdio.h>
void main()
{
      int i,n,sum=0,rem,temp;
      printf("\nenter the value of n :");
      scanf("%d",&n);
      temp=n;
      for(i=1;n!=0;i++)
      {
            rem=n%10;
            sum+=rem*rem*rem;
            n=n/10;
      }
      if(sum==temp)
      {
            printf("\narmstrong number");
      }
      else
      {
            printf("\nnot an armstrong number");
      }
}
