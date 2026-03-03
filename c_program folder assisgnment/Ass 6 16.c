//4. Write a program to check whether a given character is a vowel or consonant. funtype3 
#include<stdio.h>
int  isvowel(char ch)
{
   
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||
	ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
	return 1;	//
		
	}
	else
	{
	return 0;	//
	}	
}
void main()
{  char ch;
	printf("enter the charater to check");
	scanf(" %c",&ch);
	int res;
	res=isvowel(ch);
	if(res==1)
	{
	printf("given character is vowel");	
	}
	else
	{
		printf("given character is consonant");
	}
}
