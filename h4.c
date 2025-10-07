#include<stdio.h>
void main()
{
    int a[5666N],i,max;
    for(i=0;i<=5;i++)
    {
        printf("\nenter value of a[%d]->",i);
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<=5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("\nbiggest number : %d",max);
}
