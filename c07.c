#include<stdio.h>
void main()
{
          int a[100][100],i,j,r,c;
          printf("\n Enter number row :");
          scanf("%d",&r);
           printf("\n Enter number Col :");
          scanf("%d",&c);
          for(i=0;i<r;i++)
          {
            for(j=0;j<c;j++)
            {
              printf("\n Enter a value of a[%d][%d] -> ",i,j);
              scanf("%d",&a[i][j]);
            }
          }
          /*a[0][0] = 11;
          a[0][1] = 12;
          a[1][0] = 13;
          a[1][1] = 14;*/
             for(i=0;i<r;i++)
          {
            for(j=0;j<c;j++)
            {
             printf("\na[%d][%d]=%d",i,j,a[i][j]);
            }
            printf("\n");
          }
         
          
          
          
}
