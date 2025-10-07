#include<stdio.h>
void main()
{
    long long binary;
    int decimal=0,base=1,reminder;
    printf("enter binary number : ");
    scanf("%lld",&binary);
    while(binary>0)
    {
        reminder=binary%10;
        decimal=decimal+reminder*base;
        binary=binary/10;
        base=base*2;
    }
    printf("\ndecimal : %d",decimal);
}
