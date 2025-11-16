#include<stdio.h>
#include<string.h>
int main()
{
	
	char str1[100]="ADITYA";
	char str2[100]="aditya";
	char str3[100]="aditya";
	int result1=strcmp(str1,str2);
	int result2=strcmp(str2,str3);
    printf("%d is the value when comparing str1 and str2",result1);
    printf("\n%d is the value when comparing str2 and str3",result2);
    
	return 0;
}
