#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int len1,len2;
    printf("enter first string : ");
    fgets(str1,sizeof(str1),stdin);
    printf("enter second string : ");
    fgets(str2,sizeof(str2),stdin);
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1>len2)
    {
       printf("first string is longer");
    }
    else if(len2>len1)
    {
        printf("second string is longer");
    }
    else
    {
        printf("both strings are equal");
    }
    return 0;
    
}

