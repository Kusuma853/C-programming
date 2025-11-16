#include<stdio.h>
int main()
{
	char str2[100];
	printf("\nenter any string into str2:");
	scanf(" %[^\n]s",str2);
	puts(str2);
	return 0;
}
