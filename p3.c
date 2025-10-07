#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="apple";
    char str2[20]="apple";
    if(strcmp(str1,str2)==0)
    {
        printf("\nstrings are equal");
    }
    else
    {
        printf("\nstrings are not equal");
    }
    return 0;
}

