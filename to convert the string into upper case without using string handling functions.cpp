#include<stdio.h>
int main()
{
	char a[100]="aditya";
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=97&&a[i]<=122)
		{
			a[i]=a[i]-32;
		}
	}
	printf("\nupper case string:%s",a);
	return 0;
}
