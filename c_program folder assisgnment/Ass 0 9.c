//9. Write a C program to input the base and height of a triangle and calculate its area.
#include<stdio.h>
void main()
{
	float base ,height,area;
	printf("enter the base and height of triangle:");
	scanf("%f%f",&base,&height);
	area=0.5*base*height;
	printf("area will be %f",area);
}
