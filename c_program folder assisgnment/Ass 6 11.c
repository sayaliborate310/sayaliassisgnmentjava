//ASS 1.3.Write a program to check whether a given year is a leap year.FUNTYPE 4
#include<stdio.h>
 int leapyear(int year)
{
    
	if(year%400==0  || (year%4==0 && year%100!=0))
	{
	return 1;	//
		
	}
	else 
	{
	return 0;	//
	}	
}
void main()
{ int year;
	printf("enter the year");
	scanf("%d",&year);
     int res=leapyear(year);
	 if(res)
	 {
	 	printf("year is leap year");
		 }	
		 else
		 {
		 printf("year is not leap year");	
		 }
}
