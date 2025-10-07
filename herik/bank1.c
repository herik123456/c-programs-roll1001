#include<stdio.h>
void main()
{
    int ch;
    float balance=6000.00,amount;
    printf("\nwelcome to atm");
    printf("\n1.check balance");
    printf("\n2.deposit");
    printf("\n3.withdraw");
printf("\nenter your choice :");
scanf("%d",&ch);
switch(ch)
{
      case 1:
            printf("\nyour balance is %.2f",balance);
            break;
      case 2:
            printf("\nenter your amount of deposit :");
            scanf("%f",&amount);
            balance+=amount;
            printf("\n%.2f deposited.new balance %.2f",amount,balance);
            break;
      case 3:
            printf("\nenter your amount of withdraw :");
            scanf("%f",&amount);
            if(amount<=balance)
            {
                balance-=amount;
                printf("\n%.2f withdraw.remaining balance %.2f",amount,balance);
            }
            else
            {
                printf("\nInsufficient balance");
            }
            break;
      default:
              printf("\nInvalid choice");
              break;
}
}
