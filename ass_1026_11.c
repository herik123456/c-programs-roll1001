#include<stdio.h>
void main()
{
    int a,b,c,d,smallest;
    printf("enter four numbers : ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    smallest=a;
    if(b<smallest)
        smallest=b;
    else if(c<smallest)
        smallest=c;
    else if(d<smallest)
        smallest=d;
    printf("\nsmallest number=%d",smallest);
}
