#include<stdio.h>
#include<math.h>
int main()
{
    long long binary;
    int decimal=0,i=0,reminder;
    printf("enter binary number : ");
    scanf("%lld",&binary);
    while(binary!=0)
    {
        reminder=binary%10;
        decimal+=reminder*pow(2,i);
        binary/=10;
        i++;
    }
    printf("decimal number = %d",decimal);
    return 0;
}
