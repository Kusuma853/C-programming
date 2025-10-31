#include<stdio.h>
int main()
{
int arr[100],n,i;
printf("enter n size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nenter value at position arr[%d]",i);
scanf("%d",&arr[i]);
}
printf("\nthe array values are:");
for(i=0;i<n;i++)
{
printf("\t%d",arr[i]);
}
return 0;
}
