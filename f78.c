#include<stdio.h>
int main()
{
    char str[50];
    printf("enter a string :");
    fgets(str,sizeof(str),stdin);
    printf("\nyou entered:%s",str);
    return 0;
}
