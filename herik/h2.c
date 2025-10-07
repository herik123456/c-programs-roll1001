#include<stdio.h>
void main()
{
      int ch;
      printf("\t\n      menu      ");
      printf("\t\nmonday");
      printf("\t\ntuesday");
      printf("\t\nwednesday");
      printf("\t\nthursday");
      printf("\t\nfriday");
      printf("\t\nsaturday");
      printf("\t\nsunday");
printf("\nenter your choice :");
scanf("%d",&ch);
switch(ch)
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
                printf("\nInvalid");
                break;
}
}
