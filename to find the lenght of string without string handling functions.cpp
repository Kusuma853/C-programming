#include<stdio.h>
int main()
{
	char a[100];
	int i,len=0;
	printf("\nenter any string:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	printf("\nthe lenght of given string is:%d",len);
	return 0;
}
