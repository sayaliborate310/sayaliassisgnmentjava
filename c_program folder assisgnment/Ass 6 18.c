/*1 Print numbers from 1 to 10
Output: 1 2 3 4 5 6 7 8 9 10  w/o parameter  w/o returntype*/
#include<stdio.h>
void range()
{
	int i;
	 int n;
	printf("enter th limit \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("range will be %d\n",i);
	}	
}
void main()
{    
    range();
}
