#include <stdio.h>
#define n 3
int main()
{
    int i,j, a[n][n],rmax[n]={0};
    
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
        rmax[i]=a[i][0];
        
        for (j=0;j<n;j++)
        {
            if (rmax[i] <a[i][j])
                rmax[i]=a[i][j];
        
        
        
        printf("%d\t",a[i][j]);
        }
        printf("=%d \n",rmax[i]);
    }
    
    
    
    return 0;
}
