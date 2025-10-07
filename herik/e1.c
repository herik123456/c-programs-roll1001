#include<stdio.h>
void main()
{
      int r;
      int b;
      int h;
      int l;
      int aoc;
      int aot;
      int aor;
      printf("enter the value of r :");
      scanf("%d",&r);
      aoc=3.14*r*r;
      printf("enter the value of b :");
      scanf("%d",&b);
      printf("enter the value of h :");
      scanf("%d",&h);
      aot=0.5*b*h;
      printf("enter the value of l :");
      scanf("%d",&l);
      aor=l*b;
      if(aoc>aot && aoc>aor)
      {
            printf("aoc is greater");
      }
      else if(aot>aor)
      {
            printf("aot is greater");
      }
      else
      {
            printf("aor is greater");
      }
}
