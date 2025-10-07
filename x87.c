#include<stdio.h>
#define n 3
void main()
{
    int  i,j,a[n][n],rsum[n]={0},csum[n]={0};
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter value of a[%d][%d]->",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            rsum[i]+=a[i][j];
            csum[j]+=a[i][j];
            printf("\t%d",a[i][j]);
        }
        printf("\n%d",rsum[i]);
    }
    for(j=0;j<n;j++)
    {
        printf("\t%d",csum[j]);
    }
}
