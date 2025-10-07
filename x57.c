#include<stdio.h>
void main()
{
    int a[100][100],b[100][100],sum[100][100],i,j,rows,columns;
    printf("enter value of rows : ");
    scanf("%d",&rows);
    printf("enter value of columns : ");
    scanf("%d",&columns);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows;j++)
        {
            printf("enter value of a[%d][%d]->",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows;j++)
        {
            printf("enter value of b[%d][%d]->",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\n a matrix \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n b matrix \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }

    printf("\n sum matrix \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf(" %d",sum[i][j]);
        }
        printf("\n");
    }}
