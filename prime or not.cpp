#include<stdio.h>
int main()
{
	int n,count=0,a;
	printf("enter n value:");
	scanf("%d",&n);
	for(int a=1;a<=n;a++)
	{
		if(n%a==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("\n the number is a prime number");
	}
	else
	{
		printf("\n the number is not a prime number");
	}
	return 0;
}
