#include<stdio.h>
int main()
{
	int a=10,*ptr;
	float b=3.2,*ptr2;
	ptr=&a;
	ptr2=&b;
	printf("\nthe value of a is %d",a);
	printf("\nthe address of a is %x",&a);
	printf("\nthe value of b is %f",b);
	printf("\nthe address of b is %x",&b);
	printf("\nthe value of ptr is %x",&ptr);
	printf("\nthe address of ptr1 is %x",&ptr);
	printf("\nthe ptr pointing value is %d",*ptr);
	printf("\nthe value of ptr2 is %x",ptr2);
	printf("\nthe address of ptr2 is %x",&ptr2);
	printf("\nthe ptr2 pointing value is %f",*ptr2);
	return 0;
	

	
}
