#include<stdio.h>
void main()
{
    int a[6]={10,20,30,40,50};
    int i,pos=3,value=42;
    a[pos]=42;
    for(i=0;i<5;i++)
    {
        printf("\n%d",a[i]);
    }
}
