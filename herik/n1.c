#include<stdio.h>
void main()
{
      int bsalary;
      int hra;
      int da;
      int tax;
      int netsalary;
      printf("\nenter the value of bsalary :");
      scanf("%d",&bsalary);
      hra=bsalary*0.20;
      printf("\n%d",hra);
      da=bsalary*0.10;
      printf("\n%d",da);
      tax=bsalary*0.15;
      printf("\n%d",tax);
      netsalary=hra+da-tax+bsalary;
      printf("\n%d",netsalary);
      
}
