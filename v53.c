#include<stdio.h>
void main()
{
    int age;
    char name[200];
    printf("enter your name : ");
    scanf("%s",name);
    printf("enter your age: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you are eligible for vote");
    }
    else
    {
        printf("you are not eligible for vote");
    }
}
