#include<stdio.h>
void main()
{
    int i,n,f=1;
    printf("\nenter n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("\nfactorial is %d",f);
}
