#include<stdio.h>
void main()
{
    int a,b,ch;
    printf("\n\t       menu       ");
    printf("\n\taddition :");
    printf("\n\tsubtraction :");
    printf("\n\tmultiplication :");
    printf("\n\tdivision :");
printf("\nenter your choice :");
scanf("%d",&ch);
printf("\nenter value of a :");
scanf("%d",&a);
printf("\nenter value of b :");
scanf("%d",&b);
switch(ch)
{
    case 1:
          printf("\n%d+%d=%d",a,b,a+b);
          break;
    case 2:
          printf("\n%d-%d=%d",a,b,a-b);
          break;
    case 3:
          printf("\n%d*%d=%d",a,b,a*b);
          break;
    case 4:
          printf("\n%d/%d=%d",a,b,a/b);
          break;
    default:
          printf("\nInvalid choice");
          break;
}
}
