#include<stdio.h>
void main()
{
    int n,reminder,octal[32],i=0,r;
    printf("enter decimal number : ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("octal number : 0");
    }
    for(i=0;n>0;i++)
    {
        reminder=n%8;
        octal[i]=reminder;
        n=n/8;
    }
    printf("octal number : ");
    for(r=i-1;r>=0;r--)
    {
        printf("%d",octal[r]);
    }
}
