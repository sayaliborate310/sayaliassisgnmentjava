//5. Write a program to check whether a person is eligible to vote (age = 18).
#include<stdio.h>
void main()
{
	int age;
	printf("enter the age of person:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("aligible to vote");
		
	}
	else
	{
		printf("not able to vote");
	}
}
