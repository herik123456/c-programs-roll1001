#include<stdio.h>
void main()
{
    int n,i;
    printf("enter value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i*i==n)
        {
            printf("\n%d is a perfect square",n);
            return;
        }
    }
    printf("\n%d is a not perfect square",n);
}
