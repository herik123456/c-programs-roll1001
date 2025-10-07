#include<stdio.h>
void main()
{
      int ch,a,b;
      printf("\t\n         menu       ");
      printf("\t\n1.addition");
      printf("\t\n2.subtraction");
      printf("\t\n3.multiplication");
      printf("\t\n4.division");
      printf("\t\n5.exit");
printf("\nenter your choice :");
scanf("%d",&ch);
printf("\nenter the value of a :");
scanf("%d",&a);
printf("\nenter the value of b :");
scanf("%d",&b);
switch(ch)
{
        case 1:
              printf("\nsum=%d",a+b);
              break;
        case 2:
              printf("\nsub=%d",a-b);
              break;
        case 3:
              printf("\nmul=%d",a*b);
              break;
        case 4:
              printf("\ndiv=%d",a/b);
              break;
        default:
              printf("\nInvalid choice");
              break;
}             
}
