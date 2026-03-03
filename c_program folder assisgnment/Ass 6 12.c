//ASS 1.3.Write a program to check whether a given year is a leap year.FUNTYPE 3
#include<stdio.h>
 int leapyear()
{
     int year;
	printf("enter the year");
	scanf("%d",&year);1986    
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
{ 
     leapyear();
	
}
