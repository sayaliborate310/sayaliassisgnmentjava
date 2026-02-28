/*10. Write a C program to input marks of five subjects, find the total marks, and calculate
the percentage.*/
#include<stdio.h>
void main()
{
	int m1=45,m2=34,m3=55,m4=60,m5=50;
	float total,avg;
	total=m1+m2+m3+m4+m5;
	avg=total/5;
	printf("total will be %f and avg be %f",total,avg);
	
}
