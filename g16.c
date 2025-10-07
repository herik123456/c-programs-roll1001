#include <stdio.h>
#define n 3
int main()
{
    int i,j, a[n][n],b[n][n],c[n][n];
    
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
        printf("Enter a[%d][%d] =>",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
        printf("Enter b[%d][%d] =>",i,j);
        scanf("%d",&b[i][j]);
        }
    }
  
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
        c[i][j]=a[i][j]+b[i][j];
        
        printf("%d\t",c[i][j]);
        }
        printf(" \n");
    }
    return 0;
}
