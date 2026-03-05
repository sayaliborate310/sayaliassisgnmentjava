#include<stdio.h>
#include<string.h>
int mystrcmp(char str1[],char str2[])
{
	int i=0;
	while(str1[i]!='\0' && str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
		 return str1[i]-str2[i];	
		}
		i++;	
	}
	return str1[i]-str2[i];
}
void main()
{
	char str1[]={"apply"};
	char str2[]={"apple"};
	int res=mystrcmp(str1,str2);
	if(res==0)
	{
		printf("string are equal \n");
	}
	else if(res<0)
	{
		printf("string 2 is greater\n");
	}
	else
	{
		printf("string 1 is greater\n");
	}
}
