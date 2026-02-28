/*2. Accept three sides of a triangle from the user and determine whether the triangle is
equilateral, isosceles, or scalene.*/
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the three sides of a traingle :");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b==c)
	{
		printf("equilateral traingle\n");
	}
	else if(a==b)
	{
		printf("isoceles traingle\n");
	}
	else
	{
		printf("scalene traingle\n");
	}
}
