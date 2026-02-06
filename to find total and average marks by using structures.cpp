#include<stdio.h>
struct student
{
	int roll;
	int marks;
};
int main()
{
	struct student s[100];
	int n,i,total=0;
	float avg;
	printf("\nenter n size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter roll number:");
		scanf("%d",&s[i].roll);
		printf("\nenter student %d marks:",i+1);
		scanf("%d",&s[i].marks);
		total=total+s[i].marks;
	}
	avg=(total)/n;
	printf("\ntotal marks=%d \n average =%f",total,avg);
	return 0;
}
