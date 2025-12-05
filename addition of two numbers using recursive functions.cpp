#include<stdio.h>
int addition(int a,int b);
int main()
{
int a,b,result;
printf("\nenter a and b values:");
scanf("%d %d",&a,&b);
result=addition(a,b);
printf ("\n%d",result);
return 0;
}
int addition(int x,int y)
{
int c;
c=x+y;
return c;
}
