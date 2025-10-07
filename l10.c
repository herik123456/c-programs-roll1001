#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=i;k<=5;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=5-i;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(j=i;j<=5-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
