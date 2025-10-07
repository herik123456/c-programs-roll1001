#include<stdio.h>
void main()
{
    int n,reminder,binary[32],i=0,r;
    printf("enter decimal number : ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("binary number : 0");
    }
    for(i=0;n>0;i++)
    {
        reminder=n%2;
        binary[i]=reminder;
        n=n/2;
    }
    printf("binary number");
    for(r=i-1;r>=0;r--)
    {
        printf("%d",binary[r]);
    }
}
