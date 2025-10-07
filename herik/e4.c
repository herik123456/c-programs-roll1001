#include<stdio.h>
void main()
{
      char name[50];
      char stream[50];
      int roll_no;
      int acc,stat,eco,ba,guj,eng;
      int total;
      float percentage;
      char grade;
      printf("enter your name :");
      scanf("%s",name);
      printf("enter your stream :");
      scanf("\n%s",stream);
      printf("enter your roll number :");
      scanf("\n%d",&roll_no);
      printf("\nenter marks out of 100:\n");
      printf("accounts :");
      scanf("%d",&acc);
      printf("statistics :");
      scanf("%d",&stat);
      printf("economics :");
      scanf("%d",&eco);
      printf("ba :");
      scanf("%d",&ba);
      printf("gujarati :");
      scanf("%d",&guj);
      printf("english :");
      scanf("%d",&eng);
      total=acc+stat+eco+ba+guj+eng;
      printf("\ntotal=%d",total);
      percentage=total/6;
      printf("\npercengtage=%f",percentage);
      if(percentage>=90)
      {
            printf("\ngrade A :");
      }
      else if(percentage>=75)
      {
            printf("\ngrade B :");
      }
      else if(percentage>=60)
      {
            printf("\ngrade C :");
      }
      else if(percentage>=50)
      {
            printf("\ngrade D :");
      }
      else if(percentage>=33)
      {
            printf("\ngrade E :");
      }
      else
      {
            printf("\ngrade F :");
      }
}
