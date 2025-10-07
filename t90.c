#include <stdio.h>
int main()
{
int a[100] = {5 , 9, 3 , 4 ,5 , 1} , i , j , temp;
for(i=0;i<5;i++) {
for(j=i+1;j<6;j++) {
if(a[i] > a[j] ) {
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
}
printf("This is your sorted array: \n");
for(i=0;i<6;i++)
{
printf("%d ",a[i]);
}
}
