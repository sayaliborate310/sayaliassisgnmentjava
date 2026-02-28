//3. Write a program to check whether a given year is a leap year.
#include<stdio.h>
void main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year%400==0  || (year%4==0 && year%100!=0))
	{
		printf("year is leap year");
		
	}
	else 
	{
		printf("year is not leap year");
	}
}
