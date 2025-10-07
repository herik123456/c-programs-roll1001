#include <stdio.h>
#define n 3
void main()
{
    int i,j, a[n][n];
    
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
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
}
