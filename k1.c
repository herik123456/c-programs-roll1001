#include<stdio.h>
void main()
{
    int seasons;
    printf("\n  enter value of (1-12) : ");
    scanf("%d",&seasons);
switch(seasons)
{
    case 11:
    case 12:
    case 1:
    case 2:
          printf("winter");
          break;
    case 3:
    case 4:
    case 5:
    case 6:
          printf("summer");
          break;
    case 7:
    case 8:
    case 9:
    case 10:
          printf("monsoon");
          break;
    default:
          printf("Invalid choice");
          break;
}
}
