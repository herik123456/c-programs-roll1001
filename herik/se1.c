#include<stdio.h>
void main()
{
      int season;
      printf("\nenter the value of number :");
      scanf("%d",&season);
switch(season)
{
    case 11:
    case 12:
    case 1:
    case 2:
          printf("\nmonsoon");
          break;
    case 3:
    case 4:
    case 5:
    case 6:
          printf("\nwinter");
          break;
    case 7:
    case 8:
    case 9:
    case 10:
          printf("\nsummer");
          break;
    default:
          printf("\nInvalid choice");
          break;n
    
}
}
