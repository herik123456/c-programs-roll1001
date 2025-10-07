#include<stdio.h>
void main()
{
    int a[1000],n,i,min;
    printf("\nenter array size :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("\nenter value of a[%d]->",i);
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<=n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("\nsmallest number is :%d",min);
}
