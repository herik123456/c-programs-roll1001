#include<stdio.h>
void main()
{
    int a[2][2],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\nenter value of a[%d][%d]->",i,j);
            scanf("%d",&a[i][j]);
        }   
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\na[%d][%d]=%d",i,j,a[i][j]);
        }
    }
}
