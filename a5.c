#include<stdio.h>
void main()
{
    int a[1000],i,max;
    for(i=0;i<4;i++)
    {
        printf("\nenter value of a[%d]->",i);
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<4;i++)
    {
        a[i]>max;
        max=a[i];
    }
    printf("\nbiggest number is %d",max);
}
