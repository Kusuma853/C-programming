#include<stdio.h>
int main()
{
	int n,i=1;
	printf("enter a number:");
	scanf("%d",&n);
	while(i<=12)
	{
		printf("\n %d*%d=%d",n,i,n*i);
		i++;
	}
	return 0;
}
