#include<stdio.h>
void main()
{
      int ch;
      printf("\t\n        menu         ");
      printf("\t\nNovember to january");
      printf("\t\nfebruary to may");
      printf("\t\njune to october\n");
printf("\nenter your choice :");
scanf("%d",&ch);
switch(ch)
{
      case 1:
              printf("\nwinter");
              break;
      case 2:
              printf("\nsummer");
              break;
      case 3:
              printf("\nmonsoon");
              break;
      default:
              printf("\nInvalid choice");
              break;
}
      
}
