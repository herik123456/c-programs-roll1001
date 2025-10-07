#include<stdio.h>
void main()
{
    int a[1000],i,n,search,f=0;
    printf("\nenter your value of n :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("\nenter value of a[%d]->",i);
        scanf("%d",&a[i]);
    }
    printf("\nenter the search element :");
    scanf("%d",&search);
    for(i=0;i<=n;i++)
    {
        if(search==a[i])
        {
            printf("\nelement %d found at index",search,i);
            f=1;
            break;
        }
    }
    if(!f)
    {
        printf("\nelement %d not found at index",search); 
    }
}
