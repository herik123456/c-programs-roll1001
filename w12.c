#include<stdio.h>
void main()
{
    int season;
    char ch;
    label:
    printf("\nenter your weekday(1 to 12) :");
    scanf("%d",&season);
switch(season)
{
    case 11:
    case 12:
    case 1:
    case 2:
          printf("\nwinter");
          break;
    case 3:
    case 4:
    case 5:
    case 6:
          printf("\nsummer");
          break;
    case 7:
    case 8:
    case 9:
    case 10:
          printf("\nmonsoon");
          break;
    default:
          printf("\nInvalid choice");
          break;
}
getchar();
printf("\ndo you want to continue(y/n) :");
scanf("%c",&ch);
if(ch=='y')
      goto label;
else
      printf("\nbye bye...");
}
