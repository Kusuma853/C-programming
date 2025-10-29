#include<stdio.h>
int main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	if(n>9)
	{
		printf("\ngreater than 9");
	}
	else 
	{
		if(n==1)
		printf("one");
		else if(n==2) printf("\ntwo");
		else if(n==3) printf("\nthree");
		else if(n==4) printf("\nfour");
		else if(n==5) printf("\nfive");
		else if(n==6) printf("\nsix");
		else if(n==7) printf("\nseven");
		else if(n==8) printf("\neight");
		else if(n==9) printf("\nnine");
	}
	return 0;
}
