#include<stdio.h>
void main()
{
      char ch;
      printf("\nenter your character :");
      scanf("%c",&ch);
switch(ch)
{
      case  'a': case 'e': case 'i': case 'o': case 'u':
      case  'A': case 'E': case 'I': case 'O': case 'U':
          printf("\nvowels");
          break;
      default:
          printf("\nconsonant");
          break;
}
}
