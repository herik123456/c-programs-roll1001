#include<stdio.h>
void main()
{
    int i,n,factorial=1;
    printf("\nenter the value of n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
          factorial=factorial*i;
    }
    printf("\nfactorial=%d",factorial);
}
