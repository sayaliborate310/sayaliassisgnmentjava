#include<stdio.h>
#include<string.h>
int mystrncmp(char str1[],char str2[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(str1[i]!=str2[i])
		{
			return str1[i]-str2[i];
		}
		if(str1[i]=='\0')
		{
			break;
		}
	}
	return 0;
}
void main()
{
	char str1[]={"cat"};
	char str2[]={"cattle"};
	int n=4;
	int res=mystrncmp(str1,str2,n);
	if(res==0)
	{
		printf("both atring are equal\n");
	}
	else if(res>0)
	{
		printf("string 1 is greater\n");
	}
	else
	{
		printf("string 2 is greater");
	}
}
