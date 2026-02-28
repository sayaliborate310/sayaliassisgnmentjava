//6. Write a C program to find the square and cube of a given number.
#include<stdio.h>
void main()
{
	int n;
	float sqr,cube;
	printf("enter the no to find square and cube: ");
	scanf("%d",&n);
	sqr=n*n;
	cube=n*n*n;
	printf("sqr and cube are %f\n %f",sqr,cube);
}
