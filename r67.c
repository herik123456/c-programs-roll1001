#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="hello";
    int i,len=strlen(str);
    printf("\nreverse");
    for(i=len-1;i>=0;i--)
    {
        printf("\n%c",str[i]);
    }
    return 0;
}
