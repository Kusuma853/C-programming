#include<stdio.h>
int main()
{
int arr[100],n,i,j,found=0;
printf("enter n size");
scanf("%d",&n);
printf("\nenter %d value",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\nduplicate values are:");
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(arr[i]==arr[j])
		{
			printf("\t%d",arr[i]);
			found=1;
			break;
		}
	}
}
if(found==0)
{
	printf("\tno duplicate values");
}
return 0;
}
