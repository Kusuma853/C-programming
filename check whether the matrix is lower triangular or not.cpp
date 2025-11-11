#include<stdio.h>
int main()
{
	int a[100][100],i,j,n;
    printf("\nenter array size");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    printf("\nenter values at a[%d][%d] position:",i,j);
    scanf("%d",&a[i][j]);
    }
    }
    int lower=1;
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    if(j>i&&a[i][j]!=0||j<=i&&a[i][j]==0)
    {
    lower=0;
    break;
    }
    }
    }
    if(lower==1)
    {
    printf("\ngiven matrix is lower triangular matrix");
    }
    else 
    {
    printf("\ngiven matrix is not a lower triangular matrix");
    }
    return 0;
    }
