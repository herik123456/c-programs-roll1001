#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20]="computer";
    char s2[20]="computation";
    if(strncmp(s1,s2,3)==0)
    {
        printf("\nfirst 3 characters are same");
    }
    else
    {
        printf("\ndifferent");
    }
    return 0;
}

