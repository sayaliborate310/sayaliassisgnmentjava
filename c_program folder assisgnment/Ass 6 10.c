//ASS 1.3.Write a program to check whether a given year is a leap year.FUNTYPE 2
#include<stdio.h>
void leapyear(int year)
{
    
	if(year%400==0  || (year%4==0 && year%100!=0))
	{
		printf("year is leap year");
		
	}
	else 
	{
		printf("year is not leap year");
	}	
}
void main()
{ int year;
	printf("enter the year");
	scanf("%d",&year);
     leapyear(year);	
}
