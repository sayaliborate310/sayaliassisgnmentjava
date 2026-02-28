/*1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
desired operations.*/
#include<stdio.h>
void main()
{
	int a,b;
	char op;
	printf("enter the two number :");
	scanf("%d%d",&a,&b);
	printf("enter the operator :");
	scanf(" %c",&op);
	if(op=='+')
	{
		int c=a+b;
		printf("addition will be%d",c);
	}
	else if(op=='-')
	{
		int c=a-b;
		printf("substraction  will be%d",c);
	} else 	if(op=='*')
	{
		int c=a*b;
		printf("multiplication will be%d",c);
	} else 	if(op=='/')
	{
		int c=a/b;
		printf("division will be%d",c);
	}
	else
	{
		printf("invalid operator");
	}
}
