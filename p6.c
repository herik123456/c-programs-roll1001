#include<stdio.h>
void main()
{
    int a[6]={10,20,30,40,50};
    int i,pos=2,value=28;
    for(i=5;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=value;
    for(i=0;i<=6;i++)
    {
        printf("\n%d",a[i]);
    }
}
