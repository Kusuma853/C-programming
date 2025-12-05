#include<stdio.h>
void big();
void big()
{
int a,b;
printf("\nenter a and b values:");
scanf("%d %d",&a,&b);
if(a>b)
{
printf("\na is big");
}
else 
{
printf("\nb is big");
}
}
int main()
{
big();
return 0;
}
