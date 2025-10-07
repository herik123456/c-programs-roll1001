#include<stdio.h>
void main()
{
      int i,n,rev=0,temp,rem;
      printf("\nenter the value of n :");
      scanf("%d",&n);
      temp=n;
      for(i=1;n!=0;i++)
      {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
      }
      if(rev==temp)
      {
            printf("\npalindrome");
      }
      else
      {
            printf("\nnot a palindrome");
      }
}
