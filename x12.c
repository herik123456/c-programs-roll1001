#include<stdio.h>
void main()
{
    int a[100],i,n,max,min;
    printf("enter value of n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter value of a[%d]->",i);
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    printf("\nbiggest number is %d",max);
    printf("\nsmallest number is %d",min);
}
