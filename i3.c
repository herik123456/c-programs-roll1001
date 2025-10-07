#include<stdio.h>
void main()
{
    int a[1000],n,search,f=1,i;
    printf("\nenter your size :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter value of a[%d]->",i);
        scanf("%d",&a[i]);
    }
    printf("\nenter value of search element :");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(search==a[i]);
        {
            printf("\nelement of %d is found at index",search,i);
            f=1;
            break;
        }
    }
    if(!f)
    {
        printf("\nelement of %d is not found at index",search);
    }
    
}
