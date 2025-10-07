#include<stdio.h>
void main()
{
    int i,n,f=1;
    printf("enter n :");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("%d",i);
        f=f*i;
    }
    printf("\nfactorial=%d",f);
}
