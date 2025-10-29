#include<stdio.h>
int main()
{
	int n,s=0,r=0,num;
	printf("enter a number:");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(num==s)
	{
		printf("\nthe number is a palindrome");
	}
	else
	{
	printf("\nthe number is not a palindrome");
}
	return 0;
}
