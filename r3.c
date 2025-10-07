#include<stdio.h>
void main()
{
    int a[100][100],i,j,r,c;
    printf("\nenter number of row :");
    scanf("%d",&r);
    printf("\nenter number of col :");
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
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
