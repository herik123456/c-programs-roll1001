#include<stdio.h>
void main()
{
      int salary;
      int bonus;
      int netsalary;
      printf("\nenter the value of salary :");
      scanf("%d",&salary);
      bonus=salary*0.20;
      printf("\n%d",bonus);
      netsalary=salary-bonus;
      printf("\n%d",netsalary);
}
