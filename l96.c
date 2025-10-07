#include<stdio.h>
void main()
{
    int a[100],i,max,min,n;
    printf("enter value of n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter value of a[%d]->",i);
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
    printf("\nbiggest number = %d",max);
    printf("\nsmallest number = %d",min);
}
