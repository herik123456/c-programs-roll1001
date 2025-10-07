#include<stdio.h>
void main()
{
    int a[5],i,n;
    printf("\nenter value of n :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("\nenter value of a[%d]->",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
}
