#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
int lenght;
printf("enter a string:");
scanf("%s",&a);
printf("\nenter b string:");
scanf("%s",&b);
lenght=strlen(a);
printf("\n%d",lenght);
strcat(a,b);
printf("\n%s",a);
strrev(b);
printf("\n%s",b);
return 0;
}
