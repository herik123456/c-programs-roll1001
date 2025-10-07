#include<stdio.h>
void main()
{
      int weekday;
      printf("\nenter a number(1 to 7) :");
      scanf("%d",&weekday);
switch(weekday)
{
      case 1:
            printf("\nmonday");
            break;
      case 2:
            printf("\ntuesday");
            break;
      case 3:
            printf("\nwednesday");
            break;
      case 4:
            printf("\nthursday");
            break;
      case 5:
            printf("\nfriday");
            break;
      case 6:
            printf("\nsaturday");
            break;
      case 7:
            printf("\nsunday");
            break;
      default:
            printf("\nInvalid choice");
}
}
