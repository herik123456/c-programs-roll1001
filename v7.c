#include<stdio.h>
void main()
{
    int a[6]={5,9,3,4,5,1},i,j,temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nthis is your sorted array :");
    for(i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
}

