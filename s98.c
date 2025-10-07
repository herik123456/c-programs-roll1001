#include<stdio.h>
#include<string.h>
int main()
{
    char str[50]="C programming is fum";
    char*sub=strstr(str,"programming");
    if(sub!=NULL)
    {
        printf("\nsubstring found: %s",sub);
    }
    else
    {
        printf("\nnot found");
    }
    return 0;
}

