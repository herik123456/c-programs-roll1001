#include<stdio.h>
void main()
{
    int a[1000],i,n,search,f=0;
    printf("\nenter value of n :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("\nenter value of a[%d]->",i);
        scanf("%d",&a[i]);
    }
    printf("\nenter the value of search :");
    scanf("%d",&search);
    for(i=0;i<=n;i++)
    {
        if(search==a[i])
        {
            printf("\nelement of %d found at index",search,i);
            f=1;
            break;
        }
    }
    if(!f)
    {
        printf("\nelement of %d not found at index",search);
    }
    
}
