#include<stdio.h>
void main()
{
    int a[5],i,max,min;
    for(i=0;i<5;i++)
    {
        printf("enter value of a[%d]->",i);
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<5;i++)
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    printf("\nlargest number=%d",max);
    printf("\nsmallest number=%d",min);
}
