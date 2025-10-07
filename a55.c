#include<stdio.h>
void main()
{
    int a[1000],i,n,max;
    printf("\nenter a size :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter value of a[%d]->",i);
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("\nbiggest number is :%d",max);
}
