#include<stdio.h>
int main()
{
  char str[100];
  int i;
  printf("enter a string : ");
  fgets(str,sizeof(str),stdin);
  for(i=0;str[i]!='\0';i++)
  {
      if(str[i]>=60 && str[i]<=90)
          str[i]+=32;
  }
  printf("string is %s",str);
  return 0;
}
