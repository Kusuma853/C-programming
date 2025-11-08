#include <stdio.h>
int main()
{
	int a[10][10],b[100][100],C[100][100],r,c,i,j;
	printf("\n enter row and column values:");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("enter values at a[%d][%d] position",i,j);
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("enter values at b[%d][%d] position",i,j);
		scanf("%d",&b[i][j]);
	}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
C[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("\t%d",C[i][j]);
	}
	printf("\n");
}
return 0;
}
