//6.Write a program to check whether a given character is uppercase or lowercase.
#include<stdio.h>
void main()
{
	char ch;
	printf("enter the character to check ");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z')
	{
		printf("character is uppercase");
	}
	else
	{
		printf("character is lowercase");
		
	}
}
