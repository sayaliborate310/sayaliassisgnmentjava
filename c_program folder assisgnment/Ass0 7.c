//7. Write a C program to convert given minutes into hours and remaining minutes.
#include<stdio.h>
void main()
{
	int hr,min,rmin;
	printf("enter the minute randomly:");
	scanf("%d",&min);
	hr=min/60;
	rmin=min%60;
	printf("hrs and rmin wil be %d %d ",hr,rmin);
	
	
}
