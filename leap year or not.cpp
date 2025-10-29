#include<stdio.h>
int main()
{
	int year;
	printf("enter the year:");
	scanf("%d",&year);
	if(((year%4==0)&&(year%100!=0))||(year%400==0))
	{
		printf("the given year is a leap year");
	}
	else
	{
		printf("\nthe given year is not a leap year");
	}
	return 0;
}
