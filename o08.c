#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=0;i<=7;i++)
    {
        for(k=i;k<=7;k++)
        {
            printf(" ");
        }
            for(j=0;j<=i;j++)
            {
                printf("* ");
            }
            printf("\n");
    }
    for(i=1;i<=7;i++)
    {
        for(k=i;k<=7;k++)
        {
            printf(" ");
        }
            for(j=1;j<=i;j++)
            {
                printf("* ");
            }
            printf("\n");
    }
        for(k=0;k<=i;k++)
        {
            printf(" ");
        }
            for(j=i;j<=7;j++)
            {
                printf("* ");
            }
            printf("\n");
    
}
