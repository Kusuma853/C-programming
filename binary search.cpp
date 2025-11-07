#include<stdio.h>
int main()
{
int a[100],n,i,low,high,mid,found=0,search;
printf("\nenter array size:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nenter value at position of arr[%d]:",i);
scanf("%d",&a[i]);
}
printf("\nenter searching element:");
scanf("%d",&search);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(search==a[mid])
{
printf("\nSearching element found at:%d",mid);
found=1;
break;
}
else if(search>a[mid])
{
low=mid+1;
}
else if(search<a[mid])
{
high=mid-1;
}
}
if(found==0)
{
printf("\nno searching element is found");
}
return 0;
}
