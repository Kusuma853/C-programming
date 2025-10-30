#include<stdio.h>
int main()
{
	char ch;
	printf("the letter is:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("\nthe letter is vowel");
	}
	else
	{
		printf("\nthe letter is consonant");
	}
	return 0;
}
