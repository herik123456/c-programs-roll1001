#include<stdio.h>
#include<string.h>
int main()
{
    char word[20]="apple";
    char*pos=strchr(word,'a');
    if(pos!=NULL)
    {
        printf("\nfound at position: %ld",pos-word+1);
    }
    else
    {
        printf("\nnot found");
    }
    return 0;
}

