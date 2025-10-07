#include<stdio.h>
void main()
{
    int a[5],i;
    for(i=0;i<=4;i++)
    {
        printf("\nenter value of a[%d]->",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
}
