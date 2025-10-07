#include<stdio.h>
void main()
{
    int a[6]={10,20,30,40,50},i,pos=3,value=44;
    a[pos]=44;
    for(i=0;i<5;i++)
    {
        printf("\n%d",a[i]);
    }
}
