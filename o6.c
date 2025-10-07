#include<stdio.h>
void main()
{
    int a[5]={50,10,40,30,20},i,j,temp;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]<=a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nsorted array :");
    for(i=0;i<5;i++)
    {
        printf("\n%d",a[i]);
    }
}        
pass 1(i=0):[10,50,40,30,20]
pass 2(i=1):[10,20,50,40,30]
pass 3(i=2):[10,20,30,50,40]
pass 4(i=3):[10,20,30,40,50]
