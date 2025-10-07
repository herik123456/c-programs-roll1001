#include<stdio.h>
void main()
{
    int a[6]={10,20,30,40,50},i,pos=2,value=37;
    a[pos]=37;
    for(i=0;i<5;i++)
    {
        printf("\n%d",a[i]);
    }
}
