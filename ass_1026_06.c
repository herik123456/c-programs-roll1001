#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],result[10][10],rows1,columns1,rows2,columns2,i,j,k;
    printf("enter rows and columns for first matrix : ");
    scanf("%d %d",&rows1,&columns1);
    printf("enter rows and columns for second matrix : ");
    scanf("%d %d",&rows2,&columns2);
    if(columns1!=columns2)
    {
        printf("error!matrix multiplication not possible");
    }
    printf("\nenter elements of first matrix : ");
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<columns1;j++)
        {
            printf("enter value of a[%d][%d]->",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nenter elements of second matrix : ");
    for(i=0;i<rows2;i++)
    {
        for(j=0;j<columns2;j++)
        {
            printf("enter value of b[%d][%d]->",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<columns2;j++)
        {
            result[i][j]=0;
        }
    }
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<columns2;j++)
        {
            for(k=0;k<columns1;k++)
            {
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("\nresulting matrix : \n");
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<columns2;j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
