#include<stdio.h>
void main()
{
    int i,temp,a=0,b=1,ans;
    printf("01");
    for(i=1;i<=5;i++)
    {
        ans=a+b;
        printf("%d",ans);
        temp=a;
        a=b;
        b=ans;
    }
}
