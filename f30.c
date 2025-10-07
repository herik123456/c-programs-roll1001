#include<stdio.h>
void main()
{
    int a[1000][1000],i,j,rows,columns;
    printf("enter value of rows : ");
    scanf("%d",&rows);
    printf("enter value of columns : ");
    scanf("%d",&columns);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("\nenter value of a[%d][%d]->",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("\na[%d][%d]=%d",i,j,a[i][j]);
        }
    }
}
