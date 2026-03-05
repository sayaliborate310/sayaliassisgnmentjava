#include<stdio.h>
int mystrcmp(char str1[],char str2[])
{ int i;
	while(str1[i]!='\0' && str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			return 1;
		}
	}i++;
	if(str1[i]==str2[i])
	{
		return 0;
	}
}
void main()
{
char str1[]="abcd";
char str2[]="abcd";
int res=mystrcmp(str1,str2);
if(res==0)
{
	printf("same");
	}	
	else
	{
		printf("different");
	}
}
