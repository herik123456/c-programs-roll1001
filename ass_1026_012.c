#include<stdio.h>
void main()
{
    int i,n,f=1;
    printf("enter value of n : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("\n%d",i);
        f=f*i;
    }
    printf("\nfactorial is %d",f);
}
