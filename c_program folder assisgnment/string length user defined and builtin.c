#include<stdio.h>
#include<string.h>
void main()
{
	char str[]={"abcdefgh"};
	/*int len=strlen(str);
	printf("length is %d",len);*/
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("length is %d",i);
}
