#include<stdio.h>
#include<math.h>
int main()
{
	char op;
	double a,b;
	printf("enter an operator(+,-,*,/,%%):");
	scanf("%c",&op);
	printf("enter two operands:");
	scanf("%lf %lf",&a,&b);
	switch(op)
	{
		case '+':
			printf("%.1lf + %.1lf = %.1lf",a,b,a+b);
			break;
		case '-':
			printf("%.1lf - %.1lf = %.1lf",a,b,a-b);
			break;
		case '*':
			printf("%.1lf * %.1lf = %.1lf",a,b,a*b);
			break;
		case '/':
			printf("%.1lf / %.1lf = %.1lf",a,b,a/b);
			break;
		case '%':
			printf("fmod(%.1lf,%.1lf)=%.1lf",a,b,fmod(a,b));
			break;
		default:
			printf("Error!operator is not correct");
	}
	return 0;
}
