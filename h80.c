#include<stdio.h>
void main()
{
    int a,b;
    printf("enter value of a : ");
    scanf("%d",&a);
    printf("enter value of b : ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("a is greater");
    }
    else if(b>a)
    {
        printf("b is greater");
    }
    else
    {
        printf("both are equal");
    }
}
