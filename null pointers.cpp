#include<stdio.h>
int main()
{
	int *ptr=NULL;
	printf("\nthe value of the ptr is %x",ptr);
	printf("\nthe address of the ptr is %x",&ptr);
	printf("\nthe ptr pointing value is %d",*ptr);
	return 0;
}
