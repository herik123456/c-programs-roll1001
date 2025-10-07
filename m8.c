#include<stdio.h>
void main()
{
    int a[100][100],b[100][100],sum[100][100],i,j,r,c;
    printf("\nenter value of row :");
    scanf("%d",&r);
    printf("\nenter value of cols :");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nenter value of a[%d][%d]->",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nenter value of b[%d][%d]->",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
        printf("\n matrix A: \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("\n matrix B: \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        printf("\n sum matrix \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d\t",sum[i][j]);
            }
            printf("\n");
        }
}

