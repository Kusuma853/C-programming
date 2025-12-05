#include<stdio.h>
int main()
{
	int a=10;
	float b=3.26;
	char c='v';
	void *ptr;
	ptr=&a;
	printf("\nptr pointing value %d",*(int*)ptr);
	ptr=&b;
	printf("\nptr pointing value %f",*(float*)ptr);
	ptr=&c;
	printf("\nptr pointing value %c",*(char*)ptr);
	
}
