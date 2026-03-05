#include<stdio.h>
#include<string.h>
char* mystrchr(char str[],char ch)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
		 return &str[i];	
		}
    i++;
	}
			return NULL;
	
}
void main()
{
	char str[]={"saisha"};
	char ch='y';
	/*char *p;
	p=strchr(str,'h');
	if(p!=NULL)
	{
		printf("%s",p);
	}
	else
	{
		printf("character not found \n");
	}*/
	char *p;
	p=mystrchr(str,ch);
	if(p!=NULL)
	{
		 printf("%s",p);
	}
	else
	{
		printf("character not found\n");
	}
}
