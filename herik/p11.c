#include<stdio.h>
void main()
{
      int i,j,space,n=4;
      for(i=1;i<=4;i++)
      {
            for(space=1;space<=4-i;space++)
            {
                  printf(" ");
            }
            for(j=1;j<=(2*i-1);j++)
            {
                  printf("*");
            }
                  printf("\n");
      }
      for(i=4-1;i>=1;i--)
      {
            for(space=1;space<=4-i;space++)
            {
                  printf(" ");
            }
            for(j=1;j<=(2*i-1);j++)
            {
                  printf("*");
            }
                  printf("\n");
      }
}
