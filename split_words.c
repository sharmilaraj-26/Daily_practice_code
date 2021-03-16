#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	int i,len;
	printf("enter string");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]==' ')
		{
			printf("\n");
			continue;
		}
		printf("%c",str[i]);
	}
	
}
