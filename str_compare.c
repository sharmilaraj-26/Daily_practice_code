#include<stdio.h>
#include<string.h>
void main()
{
	char s1[10],s2[10];
	int l1,l2,i,j;
	printf("Enter String 1");
	gets(s1);
	printf("Enter string 2");
	gets(s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1==l2)
	{	
		for(i=0;i<l1;i++)
		{
			if(s1[i]!=s2[i])
			{
				printf(" Not Equal");
				return;
			}
		}
	   	printf("Equal");
	}
	else
	{
		printf("Not equal");
	}
}
