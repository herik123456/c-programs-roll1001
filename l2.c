#include<stdio.h>
void main()
{
    int i,n,reverse=0,b;
    printf("enter value of n : ");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10)
    {
        b=i%10;
        reverse=reverse*10+b;
    }
    if(reverse==n)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not an armstrong number");
    }
}
