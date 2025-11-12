#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],m[100][100],i,j,k,r1,r2,c1,c2;
	printf("\nenter rows and columns sizes:");
	scanf("%d %d %d %d",&r1,&r2,&c1,&c2);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\nenter value at position a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\nenter values at position b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	if(c1!=r2)
	{
		printf("\nmatrix multiplication is not possible");
	}
	else
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				m[i][j]=0;
				for(k=0;k<c1;k++)
				{
					m[i][j]=m[i][j]+a[i][k]*b[k][j];
				}
			}
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\t%d",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
