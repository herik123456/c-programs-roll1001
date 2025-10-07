#include<stdio.h>
void main()
{
      char name[10];
      char stream[20];
      int roll_no;
      int maths,stat,eco,ba,eng,guj;
      int total;
      printf("\nenter your name :");
      scanf("%s",name);
      printf("\nenter your stream :");
      scanf("%s",stream);
      printf("\nenter your roll number :");
      scanf("%d",&roll_no);
      printf("\nenter marks out of 100\n");
      printf("\nmaths :");
      scanf("%d",&maths);
      printf("\nstatistics :");
      scanf("%d",&stat);
      printf("\neconomics :");
      scanf("%d",&eco);
      printf("\nba :");
      scanf("%d",&ba);
      printf("\nenglish :");
      scanf("%d",&eng);
      printf("\ngujarati :");
      scanf("%d",&guj);
      total=maths+stat+eco+ba+eng+guj;
      printf("\ntotal=",%d);
}
