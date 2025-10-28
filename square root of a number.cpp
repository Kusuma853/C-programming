#include<stdio.h>
#include<math.h>
int main()
{
     double num,root;
     printf("enter the number:");
     scanf("%lf",&num);
     root=sqrt(num);
     printf("\nthe square root of %.2lf is %.2lf",num,root);
     return 0;
}
