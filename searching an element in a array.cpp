#include<stdio.h>
int main()
{
int arr[100],n,i,found=0,search;
printf("\nenter array size:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nenter value at position of arr[%d]:",i);
scanf("%d",&arr[i]);
}
printf("\nenter searching element:");
scanf("%d",&search);
for(i=0;i<n;i++)
{
if(search==arr[i])
{
printf("\nSearching element found at:%d",i);
found=1;
break;
}
}
if(found==0)
{
printf("\nno searching element is found");
}
return 0;
}
