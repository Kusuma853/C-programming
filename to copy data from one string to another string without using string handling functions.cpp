#include<stdio.h>
int main()
{
	char a[100],b[100];
	int i;
	printf("\nenter string value:");
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		b[i]=a[i];
	}
	printf("\nthe string is:%s",b);
	return 0;
}
