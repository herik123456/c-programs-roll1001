#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<6;i++)
    {
        for(k=i;k<6;k++)
        {
            printf(" ");
        }
            for(j=1;j<i;j++)
            {
                printf("* ");
            }
            printf("\n");
    }
    for(i=1;i<6;i++)
    {
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
            for(j=i;j<6;j++)
            {
                printf("* ");
            }
            printf("\n");
    }
}
