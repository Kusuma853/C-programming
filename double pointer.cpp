#include<stdio.h>
int main()
{
	int a=10;
	int *ptr=&a;
	int **dptr;
	dptr=&ptr;
	printf("\nthe value of a is %d",a);
	printf("\nthe address of a is %x",&a);
	printf("\nthe value of ptr is %x",ptr);
	printf("\nthe address of ptr is %x",&ptr);
	printf("\nthe ptr pointing value is %d",*ptr);
	printf("\nthe value of dptr is %x",dptr);
	printf("\nthe address of dptr is %x",&dptr);
	printf("\nthe dptr pointing value is %d",**dptr);
	printf("\n%d",*(&a));
	return 0;
}
