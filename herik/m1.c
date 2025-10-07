#include<stdio.h>
void get();//function declaration
void addi();
void subt();
void multi();
void divi();
int n1,n2,ans;//global variable
void main()
{
    int ch;//local variable
    printf("\t\n       menu       ");
    printf("\t\n1.addition");
    printf("\t\n2.subtraction");
    printf("\t\n3.multiplication");
    printf("\t\n4.division");
    printf("\t\n5.exit");
printf("\nenter your choice :");
scanf("%d",&ch);
switch(ch)
{
        case 1:
                get();
                addi();
                break;
        case 2:
                get();
                subt();
                break;
        case 3:
                get();
                multi();
                break;
        case 4:
                get();
                divi();
                break;
        case 5:
                break;
        default:
                printf("\nInvalid choice");
                break;
}
}
  
