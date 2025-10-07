#include<stdio.h>
void main()
{
    int a,b,c,d,smallest;
    printf("enter four numbers : ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    smallest=a;
    if(b<smallest)
    {
        printf("\nsmallest number = %d",b);
    }
    else if(c<smallest)
    {
        printf("\nsmallest number = %d",c);
    }
    else if(d<smallest)
    {
        printf("\nsmallest number = %d",d);
    }
    printf("\nthe smallest number = %d",smallest);
}
