//5. Write a C program to input five numbers and find their average.
#include<stdio.h>
void main()
{
	int a,b,c,d,e;
	float avg;
    printf("enter the 5 no");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    avg=a+b+c+d+e/5;
    printf("Avg will be %f",avg);
	
}
