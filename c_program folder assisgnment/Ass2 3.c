/*3. Write a program to find greatest of three numbers using nested if-else.*/
#include<stdio.h>
void main()
{
	int a ,b,c;
	printf("enter the three no :");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
	
	{
		printf("a is greator\n");
	}
	else
	{
		printf("c is greator \n");
	}
}
	else if(b>c)
	{
		printf("b is greator\n");
	}
	else
	{
		printf("c is greator");
	}
}


