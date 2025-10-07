#include<stdio.h>
void main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
            printf("enter value of a[%d]->",i);
            scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
}
