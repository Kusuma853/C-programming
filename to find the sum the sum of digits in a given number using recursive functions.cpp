#include<stdio.h>
int sumdigits(int n)
{
if(n!=0)
return n%10+sumdigits(n/10);
else
return 0;
}
int main()
{
int n,result;
printf("\nenter n value:");
scanf("%d",&n);
result=sumdigits(n);
printf("\nsum of digits=%d",result);
return 0;
}
