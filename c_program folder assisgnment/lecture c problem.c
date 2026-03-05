#include<stdio.h>
void islowerisupper(char str[])
{
int i;
for(i=0;str[i]!='\0';i++)
{
	if(str[i]>='A' && str[i]<='Z')
	{
		str[i]=str[i]+32;
	}
	else if(str[i]>='a' && str[i]<='z')
	{
		str[i]=str[i]-32;
	}
}
}
void main()
{
	char str[40];
	printf("enter the string\n");
	scanf("%s",str);
	islowerisupper(str);
	printf("After  changing %s",str);
	
}
