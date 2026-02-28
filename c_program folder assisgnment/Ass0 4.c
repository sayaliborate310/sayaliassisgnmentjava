//4. Write a C program to swap two numbers using a temporary third variable.
#include<stdio.h>
void main()
{
	int temp,a,b;
	printf("enter the two number");
	scanf("%d\n %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("after swaping %d and %d will be",a,b);
}
