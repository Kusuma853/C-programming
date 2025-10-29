#include<stdio.h>
#include<math.h>
int main()
{
	float P,R,SI,CI;
	int T;
	printf("enter principal amount:");
	scanf("%f",&P);
	printf("\nenter rate:");
	scanf("%f",&R);
	printf("\nenter time in years:");
	scanf("%d",&T);
	SI=(P*R*T)/100;
	CI=P*(pow(1+R/100,T)-1);
	printf("\nsimple interest:%.2f",SI);
	printf("\ncompound interest:%.2f",CI);
	return 0;
}
