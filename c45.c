#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30]="hello ";
	char str2[20]="world";
	strcat(str1, str2);
	printf("concatenated string: %s\ne ", str1);
	return 0;
}
